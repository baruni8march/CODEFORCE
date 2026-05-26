#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            ll rm=v[i]%k;
            if(rm!=0){
                ll need=k-rm;
                mp[need]++;
            }   
        }
        ll ans=0;
        for(auto it:mp){
            ll need=it.first;
            ll cnt=it.second;
            ll last=need+(cnt-1)*k;
            ans=max(ans,last+1);  
        }

        cout<<ans<<endl;    
    }
}