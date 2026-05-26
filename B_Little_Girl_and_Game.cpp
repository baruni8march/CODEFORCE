#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    vector<int>freq(26,0);

    for(char c:s){
        freq[c-'a']++;
    }

    int odd=0;

    for(int x:freq){
        if(x%2) odd++;
    }

    if(odd==0 || odd%2==1){
        cout<<"First";
    }
    else{
        cout<<"Second";
    }
}