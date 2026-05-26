#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        long long cnt=1;
        while(k>cnt){
            k-=cnt;
            cnt++;
        }
        string s(n,'a');
        s[n-cnt-1]='b';
        s[n-k]='b';
        cout<<s<<endl;
    }
}