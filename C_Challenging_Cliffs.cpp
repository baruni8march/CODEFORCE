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
        sort(v.begin(),v.end());

        ll mn=LLONG_MAX;
        ll pos=0;

        for(ll i=0;i<n-1;i++){
            if(v[i+1]-v[i]<mn){
                mn=v[i+1]-v[i];
                pos=i;
            }
        }

        cout<<v[pos]<<" ";

        for(ll i=pos+2;i<n;i++){
            cout<<v[i]<<" ";
        }

        for(ll i=0;i<pos;i++){
            cout<<v[i]<<" ";
        }

        cout<<v[pos+1]<<endl;
    }
}