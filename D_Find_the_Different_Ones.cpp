#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int>v(n+1),nxt(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    nxt[n]=-1;

    for(int i=n-1;i>=1;i--){
        if(v[i]!=v[i+1]){
            nxt[i]=i+1;
        }
        else{
            nxt[i]=nxt[i+1];
        }
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;

        if(nxt[l]!=-1 && nxt[l]<=r){
            cout<<l<<" "<<nxt[l]<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    }

    cout<<endl;
   }
}