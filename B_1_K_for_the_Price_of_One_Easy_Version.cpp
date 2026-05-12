#include<bits/stdc++.h>
using namespace std;
#define ll long long
int b[1000005];

void mergesort(int a[],int lb,int mid,int ub){
    int i=lb,j=mid+1,k=lb;
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]) b[k++]=a[i++];
        else b[k++]=a[j++];
    }
    while(i<=mid) b[k++]=a[i++];
    while(j<=ub) b[k++]=a[j++];
    for(int p=lb;p<=ub;p++) a[p]=b[p];
}

void merge(int a[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        merge(a,lb,mid);
        merge(a,mid+1,ub);
        mergesort(a,lb,mid,ub);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p,k;
        cin>>n>>p>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        merge(v.data(),0,n-1);\

        vector<ll>dp(n+1,0);
        dp[0]=0;
        if(n>=1)dp[1]=v[0];

        for(int i=2;i<=n;i++){
            dp[i]=min(dp[i-1]+v[i-1],dp[i-2]+v[i-1]);
        }

        int ans=0;
        for(int i=1;i<=n;i++){
            if(dp[i]<=p)ans=i;
        }

        cout<<ans<<endl;
    }
}
