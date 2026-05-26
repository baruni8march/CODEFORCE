#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        int ans=1;

        for(int i=1;;i++){
            if(n%i==0){
                ans=i;
            }
            else{
                break;
            }
        }

        cout<<ans<<endl;
    }
}