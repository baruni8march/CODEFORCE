#include<bits/stdc++.h>
using namespace std;
bool isAlmostPrime(int n){
    set<int>distinctPrimes;
    if(n%2==0){
        distinctPrimes.insert(2);
        while(n%2==0)
            n/=2;
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            distinctPrimes.insert(i);
            while(n%i==0)
                n/=i;
        }
    }
    if(n>1)
        distinctPrimes.insert(n);
    return(distinctPrimes.size()==2);
}

    

int main(){
    int n,k=0;
    cin>>n;
    for(int i=1;i<=n;i++){
            if(isAlmostPrime(i)){
               k++;

              }   
            else{
                continue;
            }
        }
        cout<<k;
    }
