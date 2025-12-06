#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+5;
vector<int>tree[MAXN];
bool cat[MAXN];
int n,m;
int rest=0;
void dfs(int start){
stack<tuple<int,int,int>>st;
st.push({start,0,0});
while(!st.empty()){
    auto[node,parent,cons]=st.top();
st.pop();
if(cat[node]){
    cons++;}
    else{
        cons=0;
    }
if(cons>m) continue;
bool isleaf=true;
for(int child :tree[node]){
    if(child!=parent){
        isleaf=false;
        st.push({child,node,cons});
    }
}
if(isleaf){
    rest++;
}
}

}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>cat[i];
    }
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1);
    cout<<rest<<endl;

}