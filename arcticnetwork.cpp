#include<bits/stdc++.h>
using namespace std;
int parent[505];
struct Edge{
    int u,v;
    double w;
};
int find(int x){
    if(x==parent[x]){
        return x;
    }
    return parent[x]=find(parent[x]);
}
int main(){

int t;
cin>>t;
while(t--){
    int s,p;
    cin>>s>>p;
     vector<pair<int,int>>coords(p);
     for(int i=0;i<p;i++){
        cin>>coords[i].first>>coords[i].second;
        parent[i]=i;
    }
    vector<Edge>edges;
for(int i=0;i<p;i++){
    for(int j=i+1;j<p;j++){
            double dx=coords[i].first-coords[j].first;
            double dy=coords[i].second-coords[j].second;
            double dist=sqrt(dx*dx+dy*dy);
            edges.push_back({i,j,dist});
            }
        }
 sort(edges.begin(),edges.end(),[](Edge a, Edge b){
            return a.w<b.w;
        });
    double ans=0;
    int c=p;
for(int i=0;i<edges.size();i++){
    int pu=find(edges[i].u);
    int pv=find(edges[i].v);
    if(pu!=pv){
        parent[pv]=pu;
        c--;
        ans=edges[i].w; 
        if(c==s) break;
    }
}
cout<<fixed<<setprecision(2)<<ans<<endl;

}}