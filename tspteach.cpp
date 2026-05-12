// #include<bits/stdc++.h>
// using namespace std;
// int tsp(int mask,int n,int cost[][],int pos){
//     if(mask==((1<<n)-1)){
//         return cost[pos][0];
//     }
//     if(dp[mask][i]!=-1){
//         return dp[i][max];
//     }
//     int ans=INT_MAX;
//     for(int city=0;city<=n;city++){
//         if(mask& (1<<city)==0){
//             int newans=cost[pos][city]+tsp(mask|(1<<city),n,cost,city);
//             ans=min(ans,newans);
//         }
//     }
//     return dp[mask][pos]=ans;
// }
// int main(){
//     vector<vector<int>>dp(1<<n,vector<int>(n,-1));
// }

//bottom up approach->

#include<bits/stdc++.h>
using namespace std;
int tsp(int cost[][],int n){
    int maskcount=1<<(n-1);
    vector<vector<int>>dp(n,vector<int>(maskcount,INT_MAX));
    for(int i=0;i<n;i++){
        dp[i][0]=cost[i][0];
    }

    for(int mask=1;mask<=maskcount,mask++){
        for(int i=0;i<n;i++){
            if(i!=0 && mask&(1<<(i-1))!=0){
                continue;
            }
            for(int j=1;j<n;j++){
                if(mask &(1<<(j-1))!=0){
                    int newmask=mask & (~(1<<(j-1)));
                    if(dp[j][newmask]!=INT_MAX){
                         int ans=cost[i][j]+dp[j][newmask];
                         if(ans<dp[i][mask]){
                            dp[i][mask]=ans;
                         }
                        }
                }
               
            }
        }
    }
    return dp[0][maskcount-1];
}


int main(){}