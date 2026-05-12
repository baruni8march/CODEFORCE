#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        vector<int> v;
        v.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                v.push_back(a[i]);
            }
        }

        int m=v.size();

        if(m==1){
            cout<<1<<'\n';
            continue;
        }

        int cnt=2;

        for(int i=1;i<m-1;i++){
            if((v[i]>v[i-1] && v[i]>v[i+1]) || (v[i]<v[i-1] && v[i]<v[i+1])){
                cnt++;
            }
        }

        cout<<cnt<<'\n';
    }
}