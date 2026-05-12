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
        ll sum=0;

        for(ll i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }

        if((2*sum)%n!=0){
            cout<<0<<endl;
            continue;
        }

        unordered_map<ll,ll>mp;
        ll target=2*sum/n;
        ll c=0;

        for(ll i=0;i<n;i++){
            c+=mp[target-v[i]];
            mp[v[i]]++;
        }

        cout<<c<<endl;
    }
}