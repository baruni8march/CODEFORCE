#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
   ll s,n;
   cin>>s>>n;
   vector<ll>v(n);
   for(int i=0;i<n;i++){
   cin>>v[i];
   }
   sort(v.begin(),v.end());
   int problem=0;
   for(int i=0;i<n;i++){
    if(v[i]<s){
        s+=v[i];
    }
    else{
        problem=1;
        break;
    }
   }
   if(problem)(
    cout<<"NO"<<endl;
   )
   else{
    cout<<"YES"<<endl;
   }
}
