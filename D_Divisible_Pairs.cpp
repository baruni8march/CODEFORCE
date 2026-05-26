#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;

        map<pair<int,int>,long long>mp;
        long long ans=0;

        for(int i=0;i<n;i++){
            int u;
            cin>>u;

            int rx=u%x;
            int ry=u%y;

            int nx=(x-rx)%x;
            int ny=ry;

            ans+=mp[{nx,ny}];

            mp[{rx,ry}]++;
        }

        cout<<ans<<endl;
    }
}