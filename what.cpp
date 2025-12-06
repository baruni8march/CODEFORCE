#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    for(int i=0;i<n.size();++i){
        int d=n[i]-'0';
        int inv=9-d;
        if(i==0 && d==9){
            cout<<9;
        } else {
            cout<<min(d,inv);
    }
    
}}