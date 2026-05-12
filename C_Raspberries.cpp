#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);

        bool div=false;
        int even=0;
        int best=INT_MAX;

        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%k==0) div=true;
            if(k==4 && v[i]%2==0)even++;
            best=min(best, k-(v[i]%k));
        }

        if(div){
            cout<<0<<endl;
            continue;
        }

        if(k==2){
            cout<<1<<endl;
        }
        else if(k==3){
            cout<<best<<endl;
        }
        else if(k==4){
            if(even>=2) cout<<0<<endl;
            else if(even==1) cout<<min(1,best)<<endl;
            else cout<<min(2,best)<<endl;
        }
        else if(k == 5){
            cout<<best<<endl;
        }
    }
}
