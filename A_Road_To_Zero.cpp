#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long x,y,a,b;
        cin>>x>>y;
        cin>>a>>b;
        long long ans;
        if(b<2*a){
            long long small=min(x,y);
            long long diff=abs(x-y);
            ans=small*b+diff*a;
        } else{
            ans=(x+y)*a;
        }
        
        cout<<ans<<'\n';
    }
    
    return 0;
}
