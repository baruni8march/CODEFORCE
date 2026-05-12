#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
vector<int>v(n);
int mx=0,ans=0;
for(int i=0;i<n;i++){
   cin>>v[i];
   int t=(v[i]+m-1)/m;
   if(t>=mx){
    mx=t;
    ans=i;
   }
}
cout<<ans+1<<endl;

}