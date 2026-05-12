#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        int c=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            c+=v[i];
        }
        if(k==c){
            cout<<0<<endl;
            continue;
        }
        else if(k>c){
            cout<<-1<<endl;
            continue;
        }
        int l=0;
        int sum=0;
        int mx=0;
        for(int r=0;r<n;r++){
           sum+=v[r];
           while(sum>k){
            sum-=v[l];
            l++;
           }
           if(sum==k){
            mx=max(mx,r-l+1);
           }
        }
        cout<<n-mx<<endl;

    }
}