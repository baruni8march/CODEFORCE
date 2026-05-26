#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
 vector<int>v,t;
void build(int node,int l,int r,int height){
  if(l==r){
    t[node]=v[l];
    return;
  }
  int mid=(l+r)/2;
  build(2*node,l,mid,height-1);
  build(2*node+1,mid+1,r,height-1);

  if(height%2!=0){
    t[node]=t[2*node]|t[2*node+1];
  }
  else{
    t[node]=t[2*node]^t[2*node+1];
  }
}
void update(int node,int l,int r,int pos,int val,int height){
    if(l==r){
        t[node]=val;
        return;
    }

    int mid=(l+r)/2;

    if(pos<=mid){
        update(2*node,l,mid,pos,val,height-1);
    }
    else{
        update(2*node+1,mid+1,r,pos,val,height-1);
    }

    if(height%2!=0){
        t[node]=t[2*node]|t[2*node+1];
    }
    else{
        t[node]=t[2*node]^t[2*node+1];
    }
}

int main(){
    int n,q;
    cin>>n>>q;
    int sz=1<<n;
    v.resize(sz+1);
    t.resize(4*sz);
    for(int i=0;i<sz;i++){
        cin>>v[i];
    }

    build(1,0,sz-1,n);
    while(q--){
        int p,b;
        cin>>p>>b;
        update(1,0,sz-1,p-1,b,n);
        cout<<t[1]<<endl;
    }

}