#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cF=0,cT=0,cN=0;
        string others="";

        for(char c:s){
            if(c=='F') cF++;
            else if(c=='T') cT++;
            else if(c=='N') cN++;
            else others+=c;
        }

        
        string result=others;
        
        result+=string(cT, 'T');
         result+=string(cN, 'N');
        
         result+=string(cF, 'F');

        cout<<result<<'\n';
    }
}
