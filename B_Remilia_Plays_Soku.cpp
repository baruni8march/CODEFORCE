#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x1,x2,k;
        cin>>n>>x1>>x2>>k;
        if(n<=3){
            cout<<1<<endl;
            continue;
        }
        ll diff=abs(x1-x2);
        ll d=min(diff,n-diff);

        
        
        cout<<d+k<<endl;
    }
}