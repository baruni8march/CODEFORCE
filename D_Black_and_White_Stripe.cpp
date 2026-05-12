#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;

   int l=0;
   int c=0;
   int cost=INT_MAX;

   for(int r=0;r<s.size();r++){
    if(s[r]=='W'){
        c++;
    }

    if(r-l+1==k){
        cost=min(cost,c);

        if(s[l]=='W'){
            c--;
        }
        l++;
    }
   }

   cout<<cost<<endl;
  }
}