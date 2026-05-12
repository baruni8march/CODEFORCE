#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDHI DAS:rdsne_08
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<ll>v(31,0);
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        int bit=0;
        while(x>1){
            x/=2;
            bit++;
        }
        v[bit]++;
    }
    ll ans=0;
    for(int i=0;i<31;i++){
        ans+=v[i]*(v[i]-1)/2;
    }
    cout<<ans<<endl;
      




   }


}