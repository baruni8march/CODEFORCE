#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>v(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
   int mnrow=n,mxrow=-1,mncl=m,mxcl=-1;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(v[i][j]=='#'){
            mnrow=min(i,mnrow);
            mxrow=max(i,mxrow);
            mncl=min(j,mncl);
            mxcl=max(j,mxcl);
        }
    }
}

int h=(mxrow+mnrow)/2;
int k=(mxcl+mncl)/2;

    
    cout<<h+1<<" "<<k+1<<endl;
               
 }



}