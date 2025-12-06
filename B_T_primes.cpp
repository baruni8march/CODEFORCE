#include <bits/stdc++.h>
using namespace std;

const int MAX=1e6+10;
vector<bool>is_prime(MAX,true);

void dhet(){
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i*i<MAX;++i){
        if(is_prime[i]){
            for(int j=i*i;j<MAX;j+=i)
                is_prime[j]=false;
        }
    }
}

int main(){
    dhet();
    int n;
    cin>>n;
    while(n--){
        long long x;
        cin>>x;
        long long y=sqrt(x);
        if(y*y ==x && is_prime[y])
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}