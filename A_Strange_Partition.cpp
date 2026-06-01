#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,x;
        cin>>n>>x;

        long long sum=0;
        long long mx=0;

        for(int i=0;i<n;i++){
            long long a;
            cin>>a;

            sum+=a;
            mx+=(a+x-1)/x;
        }

        long long mn=(sum+x-1)/x;

        cout<<mn<<" "<<mx<<endl;
    }
}