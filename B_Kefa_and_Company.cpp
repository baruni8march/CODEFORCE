#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<long long,long long>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());

    long long ans=0;
    long long mx=0;
    int l=0;

    for(int r=0;r<n;r++){
        ans+=v[r].second;

        while(v[r].first-v[l].first>=k){
            ans-=v[l].second;
            l++;
        }

        mx=max(mx,ans);
    }

    cout<<mx<<endl;
}