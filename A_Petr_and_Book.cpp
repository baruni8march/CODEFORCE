#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   vector<int>v(7);
   int t=0;
   for(int i=0;i<7;i++){
    cin>>v[i];
    t+=v[i];
   }
   int sum=0;
   n%=t;
   if(n==0) n=t;
   for(int i=0;i<7;i++){
    sum+=v[i];
    if(sum>=n){
        cout<<i+1;
        break;
    }
   }
   

}