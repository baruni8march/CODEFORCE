#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08
int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll m=n/2;
    ll l=v[m];
    ll r=v[m]+k;
    ll ans=v[m];
    while(l<=r){
       ll mid=(l+r)/2;
       ll cost=0;
       for(ll i=m;i<n;i++){
        if(v[i]<mid){
            cost+=mid-v[i];
        }
       }
       if(cost<=k){
        ans=mid;
        l=mid+1;
       }
       else{
        r=mid-1;
       }
    }
    cout<<ans<<endl;
}
