#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int freq[26]={0};
for(int i=0;i<s.length();i++){
freq[s[i]-'a']++;
for(int j=0;j<freq[s[i]-'a'];j++){
                cout<<s[i];
            }


}
cout<<endl;
}}