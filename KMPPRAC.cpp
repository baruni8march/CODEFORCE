#include<bits/stdc++.h>
using namespace std;

vector<int> lpscreate(string pattern){
    int m=pattern.size();
    vector<int>lps(m);
    lps[0]=0;
    int len=0,i=1;
    while(i<m){
        if(pattern[i]==pattern[len]){
            lps[i]=++len;
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
return lps;

}

vector<int> kmp(string pattern ,string text){
    vector<int>match;
    int i=0,j=0;
    int n=text.size(),m=pattern.size();
    vector<int>lps=lpscreate(pattern);
    if(m==0 ||m>n){
        return match;
    }
    while(i<n){
       if(pattern[j]==text[i]){
        i++;
        j++;
       }
       if(j==m){
        match.push_back(i-j);
        j=lps[j-1];
       }
       else if(i<n && pattern[j]!=text[i]){
        if(j!=0){
            j=lps[j-1];
            
        }
        else{
            i++;
        }
       }

    }
    return match;
}




int main(){
    string text,pattern;
    cin>>text>>pattern;
    vector<int>ans=kmp(pattern,text);
    cout<<"hehe"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" "<<endl;
    }
}