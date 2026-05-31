#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        map<int,int>mp;

        int mx=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
            mx=max(mx,mp[a[i]]);
        }

        cout<<min(n/2,n-mx)<<endl;
    }
}