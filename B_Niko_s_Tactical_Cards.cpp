#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<long long>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        long long mx=0,mn=0; 
        for(int i=0;i<n;i++){
            long long new_mx=max(mx-a[i],b[i]-mn);
            long long new_mn=min(mn-a[i],b[i]-mx);
            mx=new_mx;
            mn=new_mn;
        }

        cout<<mx<<endl;
    }

    return 0;
}
