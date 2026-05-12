#include<bits/stdc++.h>
using namespace std;
const int MOD=100000007;
int main(){
    int t;
    cin>>t;
    for(int p=1;p<=t;p++){
        int n,k;
        cin>>n>>k;

        vector<int>A(n),C(n);

        for(int i=0;i<n;i++) cin>>A[i];
        for(int i=0;i<n;i++) cin>>C[i];

        vector<int>dp(k+1,0);
        dp[0]=1;

        for(int i=0;i<n;i++){
            vector<int>newdp(k+1,0);
            for(int sum=0;sum<=k;sum++){
                if(dp[sum]==0)continue;

                for(int s=0;s<=C[i];s++){
                    int nsum=sum+s*A[i];
                    if(nsum>k) break;

                    newdp[nsum]=(newdp[nsum]+dp[sum])%MOD;
                }
            }

            dp=newdp;
        }

        cout<<"Case "<<p<<": "<<dp[k]<<"\n";
    }

    return 0;
}
