#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> divisors;
        for(ll i=1; i*i <= n; i++){
            if(n % i == 0){
                divisors.push_back(i);
                if(i != n/i) divisors.push_back(n/i);
            }
        }
        sort(divisors.begin(), divisors.end());

        int max_len = 1;
        int cur_len = 1;
        for(int i=1; i<divisors.size(); i++){
            if(divisors[i] == divisors[i-1]+1) cur_len++;
            else cur_len = 1;
            max_len = max(max_len, cur_len);
        }
        cout << max_len << endl;
    }
}
