#include<bits/stdc++.h>
using namespace std;

int simulate(long long a,long long b,bool sw){
    long long need=1;
    int layer=0;
    bool w=sw;

    while(true){
        if(w){
            if(a<need){
                break;
            }
            a-=need;
        } else{
            if(b<need){
                break;
            }
            b-=need;
        }
        layer++;
        w=!w;
        need*=2;
    }
    return layer;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        int w=simulate(a,b,true);
        int d=simulate(a,b,false);
        cout<<max(w,d)<<endl;
    }
}
