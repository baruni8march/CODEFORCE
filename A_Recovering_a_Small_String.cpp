#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=26;i++){
            for(int j=1;j<=26;j++){
                for(int k=1;k<=26;k++){
                    if(i+j+k==n){
                        char a='a'+i-1;
                        char b='a'+j-1;
                        char c='a'+k-1;
                        cout<<a<<b<<c<<endl;
                        goto done;

                    }
                }
            }
        }
        done:;
    }
}