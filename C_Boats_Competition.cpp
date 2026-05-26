#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n),cnt(n+1,0);
        for(int i=0;i<n;i++){
             cin>>v[i];
             cnt[v[i]]++;
        }
        int ans=0;
        
        for(int s=2;s<=2*n;s++){
            int t=0;
            for(int i=1;i<=n;i++){
                int j=s-i;
                if(j<1 || j>n){
                    continue;
                }
                if(i>j){
                    continue;
                }
                if(i==j){
                    t+=cnt[i]/2;
                }
                else{
                    t+=min(cnt[i],cnt[j]);
                }
            }
            ans=max(ans,t);
        }

    cout<<ans<<endl;





    }
}