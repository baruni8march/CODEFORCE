#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        bool first=true;
        ll prev=-1;
        ll prevfreq=0;
        ll ans=0;
        for(auto it:mp){
            ll x=it.first;
            ll freq=it.second;
            if(first){
                ans+=freq;
                first=false;
            }
            else{
                if(x!=prev+1){
                    ans+=freq;
                }
                else{
                    if(freq>prevfreq){
                        ans+=freq-prevfreq;
                    }
                }
            }
            prev=x;
            prevfreq=freq;



        }
        cout<<ans<<endl;

    }
}