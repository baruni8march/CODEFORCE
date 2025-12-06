#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=0,c=0;
    for(int i=0;i<n && c<m;i++){
    if(v[i]<0){
        ans+=abs(v[i]);
        c++;
    } else{
        break;
    }
        
    }
    cout<<ans<<endl;
}
