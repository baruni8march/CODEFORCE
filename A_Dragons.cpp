#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
   ll s,n;
   cin>>s>>n;
   vector<pair<ll,ll>>v(n);
   for(int i=0;i<n;i++){
   int x,y;
   cin>>x>>y;
   v[i]=make_pair(x,y);
   }
   sort(v.begin(),v.end());
   int problem=0;
   for(int i=0;i<n;i++){
    if(v[i].first<=s){
        s+=v[i].second;
    }
    else{
        problem=1;
        break;
    }
   }
   if(problem){
    cout<<"NO"<<endl;
}
   else{
    cout<<"YES"<<endl;
   }
}
