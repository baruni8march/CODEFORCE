#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s="";
        for(int i=0;i<b;i++){
            s+=char('a'+i);
        }
        for(int i=b;i<a;i++){            
            s+='a';

        }
       string ans="";
       for(int i=0;i<n;i++){
        ans+=s[i%a];
       }
       cout<<ans<<endl;
    }
}