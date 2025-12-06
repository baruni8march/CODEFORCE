#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    if(n%2!=0){
        long long b=n/2;
        long long a=n-b;
        if(k>a){
            long long x=k-a;
            cout<<2*x<<endl;
            return 0;
        }
        else{
            cout<<2*k-1<<endl;
        }
    }
    else{
long long a=n/2;
if(k>a){
    long long x=k-a;
    cout<<2*x<<endl;
    return 0;
}
else{
    cout<<2*k-1<<endl;
}

}
}