#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08
int main(){
    int n;
    cin>>n;
    vector<ll>a(n),b(n),d(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    for(ll i=0;i<n;i++){
        d[i]=a[i]-b[i];
    }
    sort(d.begin(),d.end());
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll pos=upper_bound(d.begin()+i+1,d.end(),-d[i])-d.begin();
        ans+=n-pos;
    }
    cout<<ans<<endl;
}