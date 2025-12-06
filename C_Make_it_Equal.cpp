#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> S(n), T(n);
        for (int i = 0; i < n; ++i) cin >> S[i];
        for (int i = 0; i < n; ++i) cin >> T[i];

        unordered_map<int, vector<long long>> S_res, T_res;
        for (int i = 0; i < n; ++i) {
            int r = S[i] % k;
            S_res[r].push_back(S[i]);
        }
        for (int i = 0; i < n; ++i) {
            int r = T[i] % k;
            T_res[r].push_back(T[i]);
        }

        bool possible = true;
        for (auto& [r, svec] : S_res) {
            auto& tvec = T_res[r];
            if (svec.size() != tvec.size()) {
                possible = false;
                break;
            }
            sort(svec.begin(), svec.end());
            sort(tvec.begin(), tvec.end());
            for (size_t i = 0; i < svec.size(); ++i) {
                // Check if T[i] can be reached from S[i] by adding/subtracting multiples of k
                if ((T_res[r][i] - S_res[r][i]) % k != 0 || T_res[r][i] < S_res[r][i]) {
                    possible = false;
                    break;
                }
            }
            if (!possible) break;
        }

        // Also check for residue classes in T that are not in S
        for (auto& [r, tvec] : T_res) {
            if (S_res.find(r) == S_res.end()) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }
    return 0;
}