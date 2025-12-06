#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll sum=0;
for(int i=0;i<n;){
    ll mx=INT_MIN;
    ll mn=INT_MIN;
    

    if(v[i]>=0){
        while(i<n && v[i]>=0){ 
            mx=max(mx,v[i]);
            i++;
        }
        sum+=mx;
    }
    if(v[i]<0){
        while(i<n && v[i]<0){
            mn=max(mn,v[i]);
            i++;
        }
        sum+=mn;
    }
    
}
cout<<sum<<endl;



}


}