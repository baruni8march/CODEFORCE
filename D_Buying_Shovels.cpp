#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int t;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
ll mini=n;
for(int i=1;i*i<=n;i++){
    if(n%i==0){
        int d1=i;
        int d2=n/i;
        if(d1<=k){
            mini=min(mini,n/d1);
        }
        if(d2<=k){
            mini=min(mini,n/d2);
        }
    }
}
cout<<mini<<endl;


}


}