#include<bits/stdc++.h>
using namespace std;
const int N=100;
int parent[N];

void makeset(int n){
 for(int i=1;i<=n;i++){
    parent[i]=i;
 }
}
int findset(int x){
    if(parent[x]!=x){
        parent[x]=findset(parent[x]);
    }
    return parent[x];
}

void unionn(int x,int y){
    int px=findset(x);
    int py=findset(y);
    parent[py]=px;
}


int main(){
   int n=5;
   int adj[6][6]={
     {0,0,0,0,0,0},
     {0,0,2,0,6,0},
     {0,2,0,3,8,5},
     {0,0,3,0,0,7},
     {0,6,8,0,0,9},
     {0,0,5,7,9,0}};
     vector<tuple<int,int,int>>edges;
for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
        if(adj[i][j]!=0){
            edges.push_back({adj[i][j],i,j});

        }
    }
}
sort(edges.begin(),edges.end());
makeset(n);
int ans=0;
vector<pair<int,int>>mstedges;
for(int i=0;i<edges.size();i++){
    int w=get<0>(edges[i]);
    int u=get<1>(edges[i]);
    int v=get<2>(edges[i]);
    if(findset(u)!=findset(v)){
        unionn(u,v);
        ans+=w;
        mstedges.push_back({u,v});
    }
}
for(int i=0;i<mstedges.size();i++){
    cout<<mstedges[i].first<<","<<mstedges[i].second<<endl;
}
cout<<"total cost="<<ans<<endl;

}





