#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08

const ll mod=1000000007;

int main(){
    int n,k,d;
    cin>>n>>k>>d;

    vector<vector<ll>>dp(n+1,vector<ll>(2,0));

    dp[0][0]=1;

    for(int sum=0;sum<=n;sum++){
        for(int big=0;big<=1;big++){
            for(int x=1;x<=k;x++){
                if(sum+x<=n){
                    if(x>=d){
                        dp[sum+x][1]=(dp[sum+x][1]+dp[sum][big])%mod;
                    }
                    else{
                        dp[sum+x][big]=(dp[sum+x][big]+dp[sum][big])%mod;
                    }
                }
            }
        }
    }

    cout<<dp[n][1]<<endl;
}