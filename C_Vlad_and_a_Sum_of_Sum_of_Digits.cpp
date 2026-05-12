#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08
int main(){
    ll t;
    cin>>t;

    vector<ll>pre(200001,0);

    for(ll i=1;i<=200000;i++){
        ll x=i;
        ll sum=0;
        while(x>0){
            sum+=x%10;
            x/=10;
        }
        pre[i]=pre[i-1]+sum;
    }

    while(t--){
        ll n;
        cin>>n;
        cout<<pre[n]<<endl;
    }
}