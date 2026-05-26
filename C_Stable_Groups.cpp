#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08
int main(){
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<ll>gaps;
    for(int i=1;i<n;i++){
        ll gap=v[i]-v[i-1];
        if(gap>x){
            gaps.push_back((gap-1)/x);
        }
    }
    sort(gaps.begin(),gaps.end());
    ll c=0;
    for(int i=0;i<gaps.size();i++){
        if(gaps[i]<=k){
            k-=gaps[i];
            c++;
        }
        else{
           break;
        }
    }
    cout<<gaps.size()-c+1;
}