#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>v(n);
        int sum=0;

        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }

        if(sum%k!=0){
            cout<<n<<endl;
            continue;
        }

        int fi=-1,si=-1;

        for(int i=0;i<n;i++){
            if(v[i]%k!=0){
                fi=i;
                break;
            }
        }

        for(int i=n-1;i>=0;i--){
            if(v[i]%k!=0){
                si=i;
                break;
            }
        }

        if(fi==-1){
            cout<<-1<<endl;
        }
        else{
            cout<<max(n-fi-1,si)<<endl;
        }
    }
}