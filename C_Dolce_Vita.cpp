#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,x;
        cin>>n>>x;

        vector<ll>v(n);

        for(ll i=0;i<n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        ll sum=0;
        ll ans=0;

        for(ll i=0;i<n;i++){
            sum+=v[i];

            ll cnt=i+1;

            if(sum<=x){
                ans+=(x-sum)/cnt+1;
            }
        }

        cout<<ans<<endl;
    }
}