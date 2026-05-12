#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;

    for(int i=2;i<=31;i++){
        int p=(1<<i)-1;
        if(p>n)break;
         if(n%p==0){
            cout<<n/p<<endl;
            break;
         }
    }
}



}