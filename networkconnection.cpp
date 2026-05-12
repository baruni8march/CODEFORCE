#include<bits/stdc++.h>
using namespace std;
int parent[10005];
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
    int t;
    cin>>t;
    cin.ignore(); 
    cin.ignore(); 
    while(t--){
        int n;
        cin>>n;
        cin.ignore();
    for(int i=1;i<=n;i++){
        parent[i]=i;
    }
   
   int us=0,s=0;
   string line;
   while(getline(cin,line)){
     if(line.empty()){
        break;
          }
    char ch;
    int a,b;
    stringstream ss(line);
    ss>>ch>>a>>b;
    if(ch=='c'){
        unions(a,b);
    }
    else if(ch=='q'){
     if(find(a)==find(b)){
        s++;
        }
     else{
        us++;
        }
    }
    }
    cout<<s<<","<<us<<endl;
    if(t){
    cout<<"\n";
    }
    }
   
    



}