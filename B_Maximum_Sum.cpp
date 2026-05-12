#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;

        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        vector<ll>pref(n+1,0);
        for(ll i=0;i<n;i++){
            pref[i+1]=pref[i]+v[i];
        }

        ll ans=0;

        for(ll x=0;x<=k;x++){
            ll left=2*x;
            ll right=k-x;

            ll remainingSum=pref[n-right]-pref[left];

            ans=max(ans,remainingSum);
        }

        cout<<ans<<endl;
    }
}