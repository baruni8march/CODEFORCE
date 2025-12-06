#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x>m){
        v.push_back(i+1);
    }
}
if(v.size()==0){
    cout<<n<<endl;
}
else{
    cout<<v[v.size()-1]<<endl;
}

}