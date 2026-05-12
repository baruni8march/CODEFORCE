#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08

ll kadane(vector<ll>&v,ll l,ll r){
    ll ds=0;
    ll mx=LLONG_MIN;

    for(ll i=l;i<=r;i++){
        ds+=v[i];
        mx=max(mx,ds);

        if(ds<0){
            ds=0;
        }
    }

    return mx;
}

int main(){
 ll t;
 cin>>t;
 while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }

    ll mx1=kadane(v,0,n-2);
    ll mx2=kadane(v,1,n-1);

    ll mx=max(mx1,mx2);

   if(mx>=sum){
    cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;
   }

 }
}