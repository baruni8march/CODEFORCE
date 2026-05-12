#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    string s;
    cin>>s;

    int i=1,len=0;
    vector<int>lps(s.size(),0);

    while(i<s.size()){
        if(s[i]==s[len]){
             lps[i]=len+1;
             len++;
             i++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }

    vector<int>seen(s.size()+1,0);

    for(int i=0;i<s.size()-1;i++){
        seen[lps[i]]=1;
    }

    len=lps[s.size()-1];

    while(len>0){
        if(seen[len]){
            cout<<s.substr(0,len)<<endl;
            return 0;
        }

        len=lps[len-1];
    }

    cout<<"Just a legend"<<endl;
}