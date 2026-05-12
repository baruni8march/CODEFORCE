#include <bits/stdc++.h>
using namespace std;
const int MAX=30000; 
vector<int>primes;
void sieve(){
    vector<bool>isPrime(MAX, true);
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<MAX;i++) {
        if(isPrime[i]){
            primes.push_back(i);
            for(int j=i*i;j<MAX;j+=i)
                isPrime[j]=false;
        }
    }
}

int main() {
      sieve();
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
int p=*lower_bound(primes.begin(),primes.end(),d+1);
int q=*lower_bound(primes.begin(),primes.end(),p+d);

        long long a=1LL*p*q;
        cout<<a<<endl;
    }
}
