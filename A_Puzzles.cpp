#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
vector<int> v(m);
for(int i=0;i<m;i++){
    cin>>v[i];
}
int ans=INT_MAX;
sort(v.begin(),v.end());
for(int i=0;i+n-1<m;i++){
   ans=min(ans,v[i+n-1]-v[i]);
}
cout<<ans<<endl;



}