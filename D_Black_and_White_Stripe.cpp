#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
     int n,k,c=0,p=0,mini=INT_MAX;
   cin>>n>>k;
   string s;
   cin>>s;
   for(int i=0;i<s.length();i++){
    for(int j=i+1;j<s.length();j++){
        if(s[i]=='B'){
        c++;
    }
    else{
        c++;
        p++;
    }
    if(c==k){
        break;
    }
    }
    mini=min(mini,p);
   }
   cout<<mini<<endl;
  }
}
