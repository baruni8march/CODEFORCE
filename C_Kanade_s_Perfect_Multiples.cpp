#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<int> a(n);
        unordered_set<long long> present;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            present.insert(a[i]);
        }

        sort(a.begin(), a.end());

        vector<long long> B;

        // Step 1: Find all valid b that satisfy condition 2
        for (int x : a) {
            bool ok = true;
            for (long long mul = x; mul <= k; mul += x) {
                if (!present.count(mul)) {
                    ok = false;
                    break;
                }
            }
            if (ok) B.push_back(x);
        }

        // Step 2: Greedy remove redundant ones
        vector<long long> finalB;
        for (long long x : B) {
            bool needed = true;
            for (long long y : finalB) {
                if (x % y == 0) {
                    needed = false;
                    break;
                }
            }
            if (needed) finalB.push_back(x);
        }

        // Step 3: Check condition 1
        for (int x : a) {
            bool covered = false;
            for (long long b : finalB) {
                if (x % b == 0) {
                    covered = true;
                    break;
                }
            }
            if (!covered) {
                cout << -1 << "\n";
                goto next_case;
            }
        }

        // Output
        cout << finalB.size() << "\n";
        for (long long x : finalB) cout << x << " ";
        cout << "\n";

        next_case:;
    }

    return 0;
}
