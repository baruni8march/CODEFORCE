#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    
    int t;
    cin>>t;
    while(t--){
        ll x,n;
        cin>>x>>n;
       int y=n%4;
       if(x%2==0){
        if(y==1){
            x-=n;
        }
        else if(y==2){
            x++;
        }
        else if(y==3){
            x+=n+1;
        }
           }
           else{
             if(y==1) x+=n;
            else if(y==2) x-=1;
            else if(y==3) x-=n+1;
           }
           cout<<x<<endl;


}}