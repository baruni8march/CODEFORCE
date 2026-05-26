#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
bool check(string s,string x){
    int j=0;
    for(int i=0;i<s.size();i++){
        if(j<x.size() && s[i]==x[j]){j++;}
    }
    return j==x.size();
}
int main(){
    string s;
    cin>>s;
    for(int i=0;i<1000;i+=8){
        string x=to_string(i);
        if(check(s,x)){
            cout<<"YES"<<endl;
            cout<<x<<endl;
            return 0;

        }
    }
    cout<<"NO"<<endl;
}