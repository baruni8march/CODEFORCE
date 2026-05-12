#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        int a,b;
    cin>>a>>b;
    v[i]={b,a};
    }
    int latest=0,c=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
     if(v[i].second>=latest){
            c++;
            latest=v[i].first;
        }

    }
    cout<<c<<endl;






}