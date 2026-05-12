#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>dist(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> dist[i][j];}}

    int k;
    cin>>k;
    vector<long long>results;
    for (int road = 0;road < k; road++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--; // convert to 0-based index

        // Update distances dynamically
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                dist[i][j] = min({dist[i][j], dist[i][a] + c + dist[b][j], dist[i][b] + c + dist[a][j]});
            }
        }

        // Compute sum of all unordered pairs
        long long sum = 0;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                sum += dist[i][j];

        results.push_back(sum);
    }

    // Output results
    for (auto &x : results) cout << x << " ";
    cout << "\n";
}