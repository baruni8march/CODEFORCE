#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        int idx=-1;
        for(int i=2;i<=n;i++){
            if(v[i]!=v[1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i++){
                if(v[i]!=v[1]){
                    cout<<1<<" "<<i<<endl;
                }
            }
            for(int i=2;i<=n;i++){
                if(v[i]==v[1]){
                    cout<<idx<<" "<<i<<endl;
                }
            }
        }
    }
}