#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
      cin>>v[i];
    }
    ll gcd1=0,gcd2=0;
    for(ll i=0;i<n;i+=2){
      gcd1=__gcd(gcd1,v[i]);
    }
    for(ll i=1;i<n;i+=2){
      gcd2=__gcd(gcd2,v[i]);
    }
    bool ok=true;
    for(ll i=1;i<n;i+=2){
      if(v[i]%gcd1==0){
        ok=false;
        break;
      }
    }
    if(ok){
        cout<<gcd1<<endl;
        continue;
    }
    ok=true;
    for(ll i=0;i<n;i+=2){
      if(v[i]%gcd2==0){
        ok=false;
        break;
      }
    }
    if(ok){
        cout<<gcd2<<endl;
        
    }
    else{
        cout<<0<<endl;
    }
  }
}