#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
}
sort(v.begin(),v.end());
for(int i=0;i<n-1;i++){
    if(v[i].second > v[i+1].first){
cout<<"Happy Alex"<<endl;

return 0;
}


}

cout<<"Poor Alex"<<endl;
}