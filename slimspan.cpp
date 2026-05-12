#include <bits/stdc++.h>
using namespace std;

struct Edge{
    int u,v,w;
};

int parent[105],sz[105];

int find(int x){
    if(parent[x]!=x){
    parent[x]=find(parent[x]);}
    return parent[x];
}

bool unite(int a,int b){
    a = find(a);
    b = find(b);
    if(a==b)return false;
    if(sz[a]<sz[b]){
    swap(a,b);}
    parent[b]=a;
    sz[a]+=sz[b];
    return true;
}

int main(){
    while(true){
        int n,m;
        cin>>n>>m;
        if(n==0 && m==0){
        break;}

        vector<Edge>edges(m);
        for(int i=0;i<m;i++){
            cin>>edges[i].u>>edges[i].v>>edges[i].w;
        }

        sort(edges.begin(),edges.end(),[](Edge &a, Edge &b){return a.w<b.w;});

        int ans=INT_MAX;
        bool found=false;

        for(int i=0;i<m;i++){
            for(int j=1;j<=n;j++){
                parent[j]=j;
                sz[j]=1;
            }
            int count=0;
            int maxW=-1;
            for(int j=i;j<m;j++){
                if(unite(edges[j].u,edges[j].v)){
                    count++;
                    maxW=edges[j].w;
                    if(count==n-1) break;
                }
            }

            if(count==n-1){
                found=true;
                int slim=maxW-edges[i].w;
                ans=min(ans,slim);
            }
        }

        if(found)cout<<ans<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}
