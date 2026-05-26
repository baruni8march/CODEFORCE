#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>x(n),y(n),d(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=0;i<n;i++){
            cin>>y[i];
            d[i]=y[i]-x[i];
        }
        sort(d.begin(),d.end());
        int l=0,r=n-1;
        int ans=0;
        while(l<r){
            if(d[l]+d[r]>=0){
                ans++;
                l++;
                r--;
            }
            else{
                l++;
            }
        }
        cout<<ans<<endl;
    }
}