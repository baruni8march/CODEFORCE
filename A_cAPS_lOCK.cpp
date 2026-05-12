#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin>>s;
 
 if('a'<=s[0] && s[0]<='z' ){
    int i=1;
    int prob=0;
    while(i<s.size()){
        if(s[i]>='a' && s[i]<='z'){
            prob=1;
            break;
        }
        i++;
    }
    if(prob==0){
        cout<<(char)toupper(s[0]);
        for(int i=1;i<s.size();i++){
            cout<<(char)tolower(s[i]);
        }
    }
    else{
        cout<<s<<endl;
    }
 }
 else{
    int i=1;
    int prob=0;
    while(i<s.size()){
        if(s[i]>='a' && s[i]<='z'){
            prob=1;
            break;
        }
        i++;
    }
    if(prob==0){
        
        for(int i=0;i<s.size();i++){
            cout<<(char)tolower(s[i]);
        }
    }
    else{
        cout<<s<<endl;
    }
 }
 




}