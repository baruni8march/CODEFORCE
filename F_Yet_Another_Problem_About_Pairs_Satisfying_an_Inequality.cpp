#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>a(n+1);
        vector<int>good;
        ll ans=0;

        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        for(int j=1;j<=n;j++){
            if(a[j]<j){
                ans+=lower_bound(good.begin(),good.end(),a[j])-good.begin();
                good.push_back(j);
            }
        }

        cout<<ans<<endl;
    }
}