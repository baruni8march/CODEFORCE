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
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }

        ll mx=v[0];
        ll need=0;

        for(ll i=1;i<n;i++){
            if(v[i]<mx){
                need=max(need,mx-v[i]);
            }
            else{
                mx=v[i];
            }
        }

        ll ans=0;
        ll can=0;

        while(can<need){
            ans++;
            can=can*2+1;
        }

        cout<<ans<<endl;
    }
}