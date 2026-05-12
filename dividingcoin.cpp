#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int m;
    cin>>m;
    vector<int>v(m);
    int sum=0;
    for(int i=0;i<m;i++){
        cin>>v[i];
        sum+=v[i];
    }
    int tar=sum/2;
    vector<bool>dp(sum+1,false);
    dp[0]=true;
    for(int i=0;i<m;i++){
        for(int j=sum;j>=v[i];j--){

            if(dp[j-v[i]]){
                dp[j]=true;

            }
        }
    }
    int ans=0;
    for(int s=tar;s>=0;s--){
        if(dp[s]){
            ans=s;
            break;
        }
    }   
    cout<<sum-2*ans<<endl;


}

}