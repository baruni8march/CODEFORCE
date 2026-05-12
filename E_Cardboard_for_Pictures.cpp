#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        ll l=1,r=1e9,ans=0;
        while(l<=r){
            ll mid=(l+r)/2;
            ll total=0;
            bool big=false;

            for(int i=0;i<n;i++){
                ll x=v[i]+2*mid;

                if(x>k/x){
                    big=true;
                    break;
                }

                ll area=x*x;

                if(total>k-area){
                    big=true;
                    break;
                }

                total+=area;
            }

            if(!big && total==k){
                ans=mid;
                break;
            }
            else if(big || total>k){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }

        cout<<ans<<endl;
    }
}