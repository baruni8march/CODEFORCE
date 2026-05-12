#include<bits/stdc++.h>
using namespace std;
const long long MOD=1e9+9;
const int MAX = 2000005;
long long fact[MAX],invFact[MAX];
long long modPow(long long a,long long b,long long mod){
    long long res=1;
    a%=mod;
    while(b){
        if(b&1)res=(res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// Modular inverse using Fermat's little theorem
long long modInv(long long a) {
    return modPow(a, MOD-2, MOD);
}

// Precompute factorials and inverse factorials
void precompute() {
    fact[0] = 1;
    for(long long i = 1; i < MAX; i++)
        fact[i] = (fact[i-1] * i) % MOD;

    invFact[MAX-1] = modInv(fact[MAX-1]);
    for(long long i = MAX-2; i >= 0; i--)
        invFact[i] = (invFact[i+1] * (i+1)) % MOD;
}

// nCr modulo MOD
long long nCr(long long n, long long r) {
    if(r < 0 || r > n) return 0;
    long long res = fact[n];
    res = (res * invFact[r]) % MOD;
    res = (res * invFact[n-r]) % MOD;
    return res;
}

int main() {
    precompute();

    long long nA, nB, nC;
    cin >> nA >> nB >> nC;

    // Step 1: check if B’s can be placed
    long long gaps = nC + 1 + 1; // nC + 1 non-B blocks + 1 extra
    if(nB > gaps) {
        cout << 0 << endl;
        return 0;
    }

    // Step 2: Choose gaps to place B's
    long long waysB = nCr(gaps, nB);

    // Step 3: Remaining gaps after placing B's
    long long remainingGaps = gaps - nB;

    // Step 4: Distribute C’s in remaining gaps (stars and bars)
    long long waysC = nCr(nC + remainingGaps - 1, nC);

    // Step 5: Total ways
    long long total = (waysB * waysC) % MOD;

    cout << total << endl;

    return 0;
}
