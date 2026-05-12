#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;
cin>>t;
while(t--){
    ll a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<" "<<0<<"\n";
        continue;
    }
    ll mxex=abs(a-b);
    ll r=a%mxex;
    ll mnmove=min(r,mxex-r);
    cout<<mxex<<" "<<mnmove<<"\n";


}

}