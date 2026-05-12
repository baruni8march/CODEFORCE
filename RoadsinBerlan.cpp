#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<long long>>dist(n,vector<long long>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>dist[i][j];}}

    int k;
    cin>>k;
    vector<long long>res;

    for(int r=0;r<k;r++){
        int a,b,c;
        cin>>a>>b>>c;
        a--; b--; 
        for(int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                long long newd=min(dist[i][j],dist[i][a]+c+dist[b][j]);
                newd=min(newd,dist[i][b]+c+dist[a][j]);
                dist[i][j]=newd;
            }
        }

       long long sum=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum+=dist[i][j];}}

        res.push_back(sum);
    }

    for(auto x:res){
        cout<<x<<" ";
    }
    cout<<endl;


}