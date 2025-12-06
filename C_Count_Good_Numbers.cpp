#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
ll divCount(ll l, ll r,ll d){
    if (l > r) return 0;
    return r / d - (l - 1) / d;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> P = {2, 3, 5, 7};
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;

        ll total = r - l + 1;
        ll bad = 0;

        // Iterate subsets of P using bitmask
        int n = P.size();
        for (int mask = 1; mask < (1 << n); ++mask) {
            ll d = 1;
            int bits = __builtin_popcount(mask);
            bool overflow = false;

            // Compute lcm = product of selected primes (since they're distinct)
            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    if (d > r / P[i]) { overflow = true; break; }
                    d *= P[i];
                }
            }
            if (overflow || d == 0) continue;

            ll cnt = divCount(l, r, d);
            if (bits % 2 == 1)
                bad += cnt;
            else
                bad -= cnt;
        }

        ll good = total - bad;
        cout << good << "\n";
    }
    return 0;
}
