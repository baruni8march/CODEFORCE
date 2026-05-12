#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
    cin>>t;

    while(t--){
        int n;
        long long x;
        cin>>n>>x;
        vector<long long>a(n);
        long long mx=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            mx=max(mx,a[i]);
        }

        long long low=1,high=mx+x,ans=1;

        while(low<=high){
            long long mid=(low+high)/2;

            long long need=0;
            for(long long h:a){
                if(h<mid){
                    need+=(mid-h);
                    if(need>x) break;
                }
            }

            if(need<=x){
                ans=mid;
                low=mid+1;
            } else{
                high=mid-1;
            }
        }

        cout<<ans<<"\n";
    }
}
