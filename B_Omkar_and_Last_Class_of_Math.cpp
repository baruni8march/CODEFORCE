#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
            int d=n;

            for(int i=3;i*i<=n;i+=2){
                if(n%i==0){
                    d=i;
                    break;
                }
            }

            int a=n/d;
            int b=n-a;

            cout<<a<<" "<<b<<endl;
        }
    }
}