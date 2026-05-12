#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
   int n;
   cin>>n;
   string s;
   cin>>s;
   bool has6=false;
   bool has5=false;

   for(int i=0;i+4<=n;i++){
    string sub=s.substr(i,4);
            if(sub=="2026")has6=true;
            if(sub=="2025")has5=true;
   }
  
if(has6||!has5){
            cout<<0<<endl;
        } else{
            cout<<1<<endl;
        }

  }


}