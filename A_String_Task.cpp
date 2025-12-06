#include<bits/stdc++.h>
using namespace std;
int main(){
    
        string s;
        cin>>s;
        vector<char>v,v2;
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u' || s[i]=='y'){
                continue;
            }
            else{
                v.push_back(s[i]);
            }
        }
for(int i=0;i<v.size();i++){
    v2.push_back('.');
    
    v2.push_back(v[i]);
}
    for(int i=0;i<v2.size();i++){
        cout<<v2[i];
    }
}