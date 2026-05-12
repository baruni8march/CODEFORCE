#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        string s="";
        int alpha[26]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<26;j++){
                if(v[i]==alpha[j]){
                    s+=(char)(j+97);
                    alpha[j]++;
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
}