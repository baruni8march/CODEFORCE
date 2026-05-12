#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
   while(t--){
      int n;
      cin>>n;
      string s;
      int mx=1,c=1;
      cin>>s;
      for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            c++;
        }
        else{
            c=1;
        }
        mx=max(mx,c);
      }
cout<<mx+1<<endl;
   }
}