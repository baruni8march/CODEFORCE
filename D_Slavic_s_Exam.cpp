#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;

        int j=0;

        for(int i=0;i<a.size();i++){
            if(j<b.size() && (a[i]==b[j] || a[i]=='?')){
                a[i]=b[j];
                j++;
            }
        }

        if(j==b.size()){
            cout<<"YES"<<endl;

            for(int i=0;i<a.size();i++){
                if(a[i]=='?'){
                    a[i]='a';
                }
            }

            cout<<a<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}