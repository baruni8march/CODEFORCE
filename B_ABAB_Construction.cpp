#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int i=0;
        bool ok=true;

        if(n%2!=0){
            i=1;

            if(s[0]=='b'){
                ok=false;
            }
        }

        for(;i<n;i+=2){
            if(s[i]!='?' && s[i+1]!='?' && s[i]==s[i+1]){
                ok=false;
                break;
            }
        }

        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}