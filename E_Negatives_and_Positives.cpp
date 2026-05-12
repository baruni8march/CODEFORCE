#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);

        long long abs=0,mn=LLONG_MAX;
        int neg=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            abs+=llabs(a[i]);
            if(a[i]<0)neg++;
            mn=min(mn,llabs(a[i]));
        }

        if(neg%2==0){
            cout<<abs<<endl;
        } else {
            cout<<abs-2*mn<<endl;
        }
    }
}
