#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
    cin>>n>>k;
    if(k%(n-1)==0){
        int x=k/(n-1);
        cout<<n*(x-1)+(n-1)<<endl;
    }
    else{
        int x=k/(n-1);
        cout<<n*x+(k%(n-1))<<endl;

    }

    }

}
