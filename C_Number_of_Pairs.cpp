#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long l,r;
        cin>>n>>l>>r;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long ans=0;
        for(int i=0;i<n;i++){
            long long low=l-v[i];
            long long high=r-v[i];
            int left=lower_bound(v.begin()+i+1,v.end(),low)-v.begin();
            int right=upper_bound(v.begin()+i+1,v.end(),high)-v.begin();
            ans+=right-left;
        }
        cout<<ans<<endl;
    }
}