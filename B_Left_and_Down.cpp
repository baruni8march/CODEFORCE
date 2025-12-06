#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,k;
        cin>>a>>b>>k;
        if(a<=k && b<=k) {
            cout<<1<<endl;
            continue;
        }
  ll g=__gcd(a,b);
        bool found=false;

        for(ll i=1;i*i<=g;++i){
            if(g%i==0){
                ll d1=i;
                ll d2=g/i;
  if((a/d1<=k && b/d1<=k) || (a/d2<=k && b/d2<=k)){
                    found=true;
                    break;
                }
            }
        }

        cout<<(found? 1:2)<<endl;
    }
}
