#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    vector<int>a(n+1);
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    
    vector<int>distinct(n+2,0); 
    unordered_map<int,bool>seen;
    int count=0;

    for(int i=n;i>=1;--i){
        if(!seen[a[i]]){
            seen[a[i]]=true;
            count++;
        }
        distinct[i]=count;
    }
    
    
    while(m--){
        int li;
        cin>>li;
    
            cout<<distinct[li]<<'\n';
         
    }

    return 0;
}
