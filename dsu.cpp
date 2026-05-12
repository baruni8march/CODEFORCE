#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int parent[N+1];
int rankkk[N+1];
void makeset(){
    for(int i=1;i<=N;i++){
        parent[i]=i;
        rankkk[i]=0;
    }

}

int findset(int x){
    if(parent[x]!=x){
        parent[x]=findset(parent[x]);
    }
    return parent[x];
}

void unions(int x,int y){
   int px=findset(x);
   int py=findset(y);
   if(px==py){
    return ;
   }
   if(px!=py){
    if(rankk[px]<rankk[py]){
        parent[x]=y;
    }
    else if(rankk[py]<rankk[px]){
        parent[y]=x;
    }
    else{
        parent[x]=y;
        rankk[px]++;
    }
 
   }
}

int main(){
   
}