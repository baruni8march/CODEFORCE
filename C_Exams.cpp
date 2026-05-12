#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    int pre=0;
    for(int i=0;i<n;i++){
        int mn=min(v[i].first,v[i].second);
        int mx=max(v[i].first,v[i].second);
        if(mn>=pre){
            pre=mn;
        }
        else{
            pre=mx;
        }
       
    }
    cout<<pre<<endl;
}