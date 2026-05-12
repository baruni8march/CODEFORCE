#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        int n;
        cin>>n;
        vector<int>coins(n);
        int ts=0;

        for(int i=0;i<n;i++){
            cin>>coins[i];
            ts+=coins[i];
        }

        const int INF=1e9;
        vector<int>dp(ts+1,INF);
        dp[0]=0;
       for(int i=0;i<n;i++){
            for(int s=ts;s>=coins[i];s--){
                if(dp[s-coins[i]]!=INF){
                    dp[s]=min(dp[s],dp[s-coins[i]]+1);
                }
            }
        }
       for(int s=p;s<=ts;s++){
            if(dp[s]!=INF){
                cout<<s<<" "<<dp[s]<<"\n";
                break;
            }
        }
    }

    return 0;
}