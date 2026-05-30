#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
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

        long long k=2;

        while(true){
            set<long long>s;
            for(int i=0;i<n;i++){
                s.insert(v[i]%k);
            }

            if(s.size()==2){
                cout<<k<<endl;
                break;
            }

            k*=2;
        }
    }
}