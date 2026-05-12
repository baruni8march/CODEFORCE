#include<bits/stdc++.h>
using namespace std;
const int MAXN=100005;
int parent[2*MAXN];
int sizeset[2*MAXN];
long long sumset[2*MAXN];
int where[MAXN]; 
int find(int x){
    if(parent[x]==x) return x;
    return parent[x]=find(parent[x]);
}

void unions(int a,int b){
    int pa=find(a);
    int pb=find(b);
    if(pa!=pb){
        parent[pa]=pb;
        sizeset[pb]+=sizeset[pa];
        sumset[pb]+=sumset[pa];
    }
}

void parentchange(int p,int q,int &cnt){
    int old_root=find(where[p]);
    int new_root=find(where[q]);
    if (old_root==new_root) return;
    sizeset[old_root]--;
    sumset[old_root]-= p;
    cnt++;
    parent[cnt]=cnt;
    sizeset[cnt]=1;
    sumset[cnt]=p;
    parent[cnt]=new_root;
    sizeset[new_root]+=1;
    sumset[new_root]+=p;
    where[p]=cnt;
}

int main(){
    int n,m;
    while(cin>>n>>m){
        int cnt=n;
        for(int i=1;i<=n;i++){
            parent[i]=i;
            sizeset[i]=1;
            sumset[i]=i;
            where[i]=i;
        }

        while(m--){
            int op,p,q;
            cin>>op>>p;
            if(op==1){ 
                cin>>q;
                int rootP=find(where[p]);
                int rootQ=find(where[q]);
                if(rootP!=rootQ)
                unions(rootP,rootQ);
            } 
            else if(op==2){ 
                cin>>q;
                parentchange(p,q,cnt);
            } 
            else if(op==3){ 
                int rootP=find(where[p]);
                cout<<sizeset[rootP]<<" "<<sumset[rootP]<<"\n";
            }
        }
    }
}