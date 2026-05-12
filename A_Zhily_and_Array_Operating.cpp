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

    vector<ll>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    ll best=0;
    int c=0;

    for(int i=n-1;i>=0;i--){
        ll cur=v[i]+max(0LL,best);

        if(cur>0){
            c++;
        }

        best=cur;
    }

    cout<<c<<endl;
  }
}