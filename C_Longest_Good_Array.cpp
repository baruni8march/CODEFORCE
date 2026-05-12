#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long l, r;
        cin>>l>>r;
        long long R=r-l;
        long long k=(long long)((1+sqrt(1+8.0*R))/2);

        cout<<k<<endl;
    }
}
