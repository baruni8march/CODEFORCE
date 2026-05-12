#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int l=0,r=n-1;
        int sum1=0,sum2=0;
        int ans=0;

        while(l<=r){
            if(sum1<=sum2){
                sum1+=v[l];
                l++;
            }
            else{
                sum2+=v[r];
                r--;
            }

            if(sum1==sum2){
                ans=l+(n-1-r);
            }
        }

        cout<<ans<<endl;
    }
}