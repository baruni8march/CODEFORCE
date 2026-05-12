#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    while(b!= 0){
        a%=b;
        int temp=a;
        a=b;
        b=temp;
    }
    return a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,a,b;
        cin>>l>>a>>b;

        int d=gcd(l,b);
        int ans=a+((l-1-a)/d)*d;

        cout<<ans<<endl;
    }
    
}
