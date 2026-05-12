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
        
        string a,b;
        bool found=false;

        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                a+='0';
                b+='0';
            }
            else if(s[i]=='2'){
                if(!found){
                    a+='1';
                    b+='1';
                }
                else{
                    a+='0';
                    b+='2';
                }
            }
            else{
                if(!found){
                    a+='1';
                    b+='0';
                    found=true;
                }
                else{
                    a+='0';
                    b+='1';
                }
            }
        }

        cout<<a<<endl;
        cout<<b<<endl;
    }
}