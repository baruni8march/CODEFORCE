#include<bits/stdc++.h>
using namespace std;
int parent[105];

int find(int x){
    if(parent[x]==x)return x;
    return parent[x]=find(parent[x]);
}
void unions(int a,int b){
    int pa=find(a);
    int pb=find(b);
    if(pa!=pb){
        parent[pa]=pb;
    }
}
int main(){
int t;
cin>>t;
for(int i=1;i<=t;i++){
    int n;
    cin>>n;
    vector<tuple<int,int,int>>edges;
    for(int j=0;j<=n;j++){
        parent[j]=j;
    }
    while(true){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)break;
        edges.push_back({c,a,b});
    }
    int cost=0;
   sort(edges.begin(),edges.end());
   for(auto &e:edges){
    int w,u,v;
    tie(w,u,v)=e;
    if(find(u)!=find(v)){
        unions(u,v);
        cost+=w;
    }
   }
   for(int j=0;j<=n;j++){
    parent[j]=j;}
    sort(edges.rbegin(),edges.rend());
    int dcost=0;
    for(auto &e:edges){
        int w,u,v;
        tie(w,u,v)=e;
        if(find(u)!=find(v)){
            unions(u,v);
            dcost+=w;
        }

    }
int ans=(dcost+cost);
cout<<"Case "<<i<<": ";
if(ans%2==0){
    cout<<ans/2<<endl;
        }
else{
    int p=ans,q=2;
    int g=__gcd(p,q);
    p/=g;
    q/=g;
    if(q==1)cout<<p<<endl;
    else cout<<p<<"/"<<q<<endl;
        }

}



}