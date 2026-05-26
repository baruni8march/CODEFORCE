#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        long long ans=(n/3)*min(3*a,b)+min((n%3)*a,b);
        cout<<ans<<"\n";
    }
}