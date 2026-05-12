#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDHI DAS:rdsne_08
int main()
{
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll mx=v[0];
    ll ans=0;
    for(int i=0;i<n;i++){
      if((mx<0 && v[i]<0)||(mx>0 && v[i]>0)){
        mx=max(mx,v[i]);
      }
      else{
        ans+=mx;
        mx=v[i];
      }
    }
    ans+=mx;
    cout<<ans<<endl;
   
   
   

}


}