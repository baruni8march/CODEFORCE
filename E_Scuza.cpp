#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,q;
        cin>>n>>q;

        vector<long long>a(n),pre(n),mx(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        pre[0]=a[0];
        mx[0]=a[0];

        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+a[i];
            mx[i]=max(mx[i-1],a[i]);
        }

        while(q--){
            long long k;
            cin>>k;

            int pos=upper_bound(mx.begin(),mx.end(),k)-mx.begin();

            if(pos==0){
                cout<<0<<" ";
            }
            else{
                cout<<pre[pos-1]<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}