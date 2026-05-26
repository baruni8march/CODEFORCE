#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    string s;
    cin>>s;
    int n=s.size();
    long long ans=0;
    int last=-1;
    for(int i=0;i<n;i++){
        if(i>=3){
            if(s[i-3]=='b'&&s[i-2]=='e'&&s[i-1]=='a'&&s[i]=='r'){
                last=i-3;
            }
        }
        if(last!=-1){
            ans+=last+1;
        }
    }
    cout<<ans<<endl;
}