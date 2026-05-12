#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long y=n%2020;
        long long x=n/2020-y;
        if(x>=0)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
