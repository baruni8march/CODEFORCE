#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=7;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=v[i];
        }
        cout<<v[n-1]-sum<<endl;
    }
}