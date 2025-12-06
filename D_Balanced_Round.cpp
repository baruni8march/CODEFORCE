#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int c=1,mx=1;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
     int diff=v[i+1]-v[i];
     if(diff<=k){
       c++;
       mx=max(mx,c);
     }
     else{
        c=1;
       }
    }
    cout<<n-mx<<endl;
}



}