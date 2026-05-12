#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount;
    cin>>amount;
    int n;
    cin>>n;
    vector<int>coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    
    int dp[n+1][amount+1];
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    for(int i=1;i<=amount;i++){
        dp[0][i]=INT_MAX -1;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=amount;j++){
            if(coins[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }
            else{
               int opt1=dp[i-1][j];
               int opt2=1+dp[i][j-coins[i-1]];
                 dp[i][j]=min(opt1,opt2);
            }
        }
    }
    cout<<dp[n][amount];




}