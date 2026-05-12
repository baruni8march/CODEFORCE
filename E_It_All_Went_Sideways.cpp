#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int>v(n+1);
       ll total=0;
       for(int i=1;i<=n;i++){
          cin>>v[i];
          total+=v[i];
      }
      
      vector<int>s(n+2,INT_MAX);
      for(int i=n;i>=1;i--){
        s[i]=min(v[i],s[i+1]);
      }
      ll notans=0;
      for(int i=1;i<=n;i++){
        notans+=s[i];
      }
      ll c=total-notans;
      vector<int>hehe(n+1,0);
      int best=0;
      for(int i=1;i<=n;i++){
        hehe[s[i]]++;
        best=max(best,hehe[s[i]]);
      }
      ll ans =c+max(0,best-1);
      cout<<ans<<endl;


    }
}