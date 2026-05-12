#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cout<<i<<" "<<n+2*i-1<<" "<<n+2*i<<" ";
        }
        cout<<endl;
    }
}