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
    vector<ll>v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    set<ll>s;
    ll sum=0;
    bool ok=false;
    s.insert(0);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum-=v[i];
        }
        else{
            sum+=v[i];
        }
        if(s.count(sum)){
            ok=true;
        }
        s.insert(sum);
    }
    if(ok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



  }


}