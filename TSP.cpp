#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;

int tsp(int mask, int pos, int n, vector<vector<int>>& cost) {
    if(mask == ((1 << n) - 1)) {
        return cost[pos][0];
    }

    if(dp[mask][pos] != -1) {
        return dp[mask][pos];
    }

    int ans = INT_MAX;

    for(int city = 0; city < n; city++) {
        if((mask & (1 << city)) == 0) {
            int newans = cost[pos][city] + tsp(mask | (1 << city), city, n, cost);
            ans = min(ans, newans);
        }
    }

    return dp[mask][pos] = ans;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> cost(n, vector<int>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }

    dp.assign(1 << n, vector<int>(n, -1));

    cout << tsp(1, 0, n, cost);
}