#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll k,l,m,n,d;
cin>>k>>l>>m>>n>>d;
vector<ll>v(d+1,0);
for(ll i=1;i<=d;i++){
    if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
        v[i]=1;
    }
}
ll c=0;
for(ll i=1;i<=d;i++){
    if(v[i]==1){
        c++;
    }
}
cout<<c<<endl;
}