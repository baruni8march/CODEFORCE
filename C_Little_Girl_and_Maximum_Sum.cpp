#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n+1);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<ll>freq(n+3,0);
    for(ll i=0;i<q;i++){
        ll l,r;
        cin>>l>>r;
        freq[l]++;
        freq[r+1]--;
    }
    for(ll i=1;i<=n;i++){
        freq[i]+=freq[i-1];
    }
   sort(v.begin()+1,v.end());
   sort(freq.begin()+1,freq.begin()+n+1);
    ll ans=0;
    for(ll i=1;i<=n;i++){
       ans+=freq[i]*v[i];
    }
    cout<<ans<<endl;


}