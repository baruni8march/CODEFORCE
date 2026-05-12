#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        ll l=x/ __gcd(x,y)*y;
        ll plus=n/x-n/l;
        ll minus=n/y-n/l;
        ll rem=n-plus;
        ll sumlarg=(n*(n+1)/2) - rem*(rem+1)/2;
        ll sumsmall=minus*(minus+1)/2;
        cout<<sumlarg-sumsmall<<endl;


    }
}