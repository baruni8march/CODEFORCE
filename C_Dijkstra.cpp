#include <bits/stdc++.h>
using namespace std;

const int MAX=1e5+5;
const long long INF=1e18;

vector<pair<int,int>>graph[MAX];
vector<long long>dist(MAX,INF);
vector<int>parent(MAX,-1);

void dijkstra(int start,int n){
    priority_queue<pair<long long,int>,vector<pair<long long,int>>, greater<>> pq;
    dist[start]=0;
    pq.push({0,start});

    while(!pq.empty()){
        auto[d,u]=pq.top();
        pq.pop();

        if(d>dist[u])continue;

        for(auto [v,w]:graph[u]){
            if (dist[u]+w < dist[v]){
                dist[v]=dist[u]+w;
                parent[v]=u;
                pq.push({dist[v],v});
            }
        }
    }
}

void print_path(int end){
    vector<int>path;
    for (int v=end; v!=-1; v=parent[v])
        path.push_back(v);
    reverse(path.begin(),path.end());
    for (int node:path)
        cout<<node<<" ";
    cout<<endl;
}

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;++i){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].emplace_back(v,w);
        graph[v].emplace_back(u,w);  
    }

    dijkstra(1,n);

    if(dist[n]==INF){
        cout<<-1<<endl;
    } else {
        print_path(n);
    }

    return 0;
}
