#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int coins[]={1,5,10,25,50};
int n=5;
const int MAX=7489;
ll dp[6][MAX+1]={0};
for(int i=0;i<=n;i++){
    dp[i][0]=1;
}
for(int i=1;i<=MAX;i++){
    dp[0][i]=0;
}
for(int i=1;i<=n;i++){
   for(int j=1;j<=MAX;j++){
    if(coins[i-1]>j){
        dp[i][j]=dp[i-1][j];
    }
    else{
        dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
    }
   }
}
ll a;
while(cin>>a){
cout<<dp[n][a]<<endl;
}}   