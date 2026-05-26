#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        for(int i=1;i<n;i++){
            v[i]+=v[i-1];
        }
        while(q--){
            long long x;
            cin>>x;
            int idx=lower_bound(v.begin(),v.end(),x)-v.begin();
            if(idx==n){
                cout<<-1<<endl;
            }
            else{
                cout<<idx+1<<endl;
            }
        }
    }
}