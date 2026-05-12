#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>v(n+1);
        vector<int>pos(2*n+1,0);

        for(int i=1;i<=n;i++){
            cin>>v[i];
            pos[v[i]]=i;
        }

        int c=0;

        for(int i=1;i<=2*n;i++){
            if(pos[i]==0) continue;

            for(int j=i+1;i*j<=2*n;j++){
                if(pos[j]==0) continue;

                if(pos[i]+pos[j]==i*j){
                    c++;
                }
            }
        }

        cout<<c<<endl;
    }
}