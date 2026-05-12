#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        long long S=0,mx=0,c=0;

        for(int i=0;i<n;i++){
            S+=v[i];
            mx=max(mx,v[i]);

            if(mx==S-mx){
                c++;
            }
        }

        cout<<c<<endl;
    }

    return 0;
}
