#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(3,1e9));
    dp[0][0]=0;
    dp[0][1]=0;
    dp[0][2]=0;
    for(int i=1;i<=n;i++){
        dp[i][0]=min({dp[i-1][0],dp[i-1][1],dp[i-1][2]})+1;
        if(v[i]==1 || v[i]==3){
            dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
        }
        if(v[i]==2 || v[i]==3){
            dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
        }
    }
    cout<<min({dp[n][0],dp[n][1],dp[n][2]})<<endl;







}