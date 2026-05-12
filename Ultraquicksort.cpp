#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll b[500005];
ll merge(ll a[],ll lb,ll mid,ll ub){
    ll i=lb;
    ll j=mid+1;
    ll k=lb;
    ll c=0;
    
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            b[k++]=a[i++];
        }
        else{
            b[k++]=a[j++];
            c+=(mid-i+1);
        }
    }
    while(i<=mid){
        b[k++]=a[i++];
    }
    while(j<=ub){
        b[k++]=a[j++];  
    }
    for(ll p=lb;p<=ub;p++){
        a[p]=b[p];
    }
return c;

}
ll mergesort(ll a[],ll lb,ll ub){
if(lb>=ub) return 0;
ll mid=lb+(ub-lb)/2;
ll c=0;
if(lb<ub){
    c+=mergesort(a,lb,mid);
    c+=mergesort(a,mid+1,ub);
    c+=merge(a,lb,mid,ub);

}
return c;

}


int main(){
 while(true){
   ll n;
   cin>>n;
    if(n==0) break;
    vector<ll>v(n);
   for(ll i=0;i<n;i++){
    cin>>v[i];
   }
    
cout<<mergesort(v.data(),0,n-1)<<endl;

 }



}