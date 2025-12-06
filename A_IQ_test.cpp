#include<bits/stdc++.h>
using namespace std;
int main(){
int n,ce=0,co=0;
cin>>n;
vector<int>v1,v2;
for(int i=0;i<n;i++){
int x;
cin>>x;
if(x%2==0){
    v1.push_back(i+1);
    ce++;
    
}
else{
    v2.push_back(i+1);
co++;
}
}
if(ce==1){
    cout<<v1[0]<<endl;
}
else if(co==1){
    cout<<v2[0]<<endl;
}


}