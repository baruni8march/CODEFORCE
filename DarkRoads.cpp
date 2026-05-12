#include<bits/stdc++.h>
using namespace std;
vector<int>parent;
int find(int x){
    if(parent[x]==x){
        return x;
    }
    return parent[x]=find(parent[x]);
}
void unions(int a,int b){
int pa=find(a);
int pb=find(b);
if(pa!=pb){
    parent[pa]=pb;}
}

int main(){
while(true){
    int n,m;
    cin>>n>>m;
    if(n==0 && m==0) break;
    parent.assign(n,0);
for(int i=0;i<n;i++){
    parent[i]=i;
}

   vector<tuple<int,int,int>>edges;
   long long total=0,cost=0;
    while(m--){
    int a,b,c;
    cin>>a>>b>>c;
    
    edges.push_back({c,a,b});
    total+=c;}
    sort(edges.begin(),edges.end());
    for(auto &edge:edges){
        int c,a,b;
        tie(c,a,b)=edge;
    if(find(a)!=find(b)){
        unions(a,b);
        cost+=c;
    }
}
cout<<total-cost<<endl;
   }



}






