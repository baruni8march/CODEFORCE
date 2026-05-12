#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08

int main(){
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;

    vector<ll>v(n+1);

    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    ll ans=0;

    for(int i=n;i>=1;i--){
        if(i+v[i]<=n){
            v[i]+=v[i+v[i]];
        }

        ans=max(ans,v[i]);
    }

    cout<<ans<<endl;
  }
}