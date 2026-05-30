#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        int ans=1e9;

        for(int x=0;x<=40;x++){
            int nb=b+x;

            if(nb==1){
                continue;
            }

            int temp=a;
            int cnt=x;

            while(temp>0){
                temp/=nb;
                cnt++;
            }

            ans=min(ans,cnt);
        }

        cout<<ans<<endl;
    }
}