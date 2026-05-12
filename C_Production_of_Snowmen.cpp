#include <bits/stdc++.h>
using namespace std;

const int MAXN = 5000;

bitset<MAXN> rotate_right(const bitset<MAXN>& b, int r, int n) {
    bitset<MAXN> res;
    for (int i = 0; i < n; i++) {
        if (b[i]) res[(i - r + n) % n] = 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n), c(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        for (int &x : c) cin >> x;

        int maxV = 3 * n;

        vector<bitset<MAXN>> A_ge(maxV + 1), C_le(maxV + 1);

        for (int x = 1; x <= maxV; x++) {
            A_ge[x] = A_ge[x - 1];
            C_le[x] = C_le[x - 1];
        }

        for (int i = 0; i < n; i++) {
            for (int x = 1; x <= a[i]; x++) A_ge[x][i] = 1;
            for (int x = c[i]; x <= maxV; x++) C_le[x][i] = 1;
        }

        long long ans = 0;

        for (int j = 0; j < n; j++) {
            bitset<MAXN> bad_i, bad_k;
            bad_i.reset();
            bad_k.reset();

            for (int t = 0; t < n; t++) {
                int val = b[(j + t) % n];
                bad_i |= rotate_right(A_ge[val], t, n);
                bad_k |= rotate_right(C_le[val], t, n);
            }

            int cntA = n - bad_i.count();
            int cntC = n - bad_k.count();

            ans += 1LL * cntA * cntC;
        }

        cout << ans << "\n";
    }
    return 0;
}
