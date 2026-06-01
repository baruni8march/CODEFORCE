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
            ll x;
            cin>>x;
            v[i]=x+i+1;
        }
        sort(v.begin(),v.end());
        ll sum=0,c=0;
        for(ll i=0;i<n;i++){
           sum+=v[i];
           if(sum<=k){
            c++;
           }
        }
       cout<<c<<endl;

    }
}