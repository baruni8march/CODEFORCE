#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
   long long S=0;
        for(int i=0;i+1<n;i++){
            S+=llabs(a[i]-a[i+1]);
        }

        long long ans=S; 
        ans=min(ans,S-llabs(a[0]-a[1]));
   ans=min(ans,S-llabs(a[n-2]-a[n-1]));
       for(int k=1;k+1<n;k++){
        long long cur=S-llabs(a[k-1]-a[k])-llabs(a[k]-a[k+1])+llabs(a[k-1]-a[k + 1]);
            ans=min(ans,cur);
        }

        cout<<ans<<endl;
    }

    return 0;
}
