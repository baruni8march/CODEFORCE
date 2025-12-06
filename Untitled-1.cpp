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
            auto it = T_res.find(r);
            if (it == T_res.end() || svec.size() != it->second.size()) {
                possible = false;
                break;
            }
            auto& tvec = it->second;
            sort(svec.begin(), svec.end());
            sort(tvec.begin(), tvec.end());
            for (size_t i = 0; i < svec.size(); ++i) {
                if ((tvec[i] - svec[i]) % k != 0 || tvec[i] < svec[i]) {
                    possible = false;
                    break;
                }
            }
            if (!possible) break;
        }

        cout << (possible ? "YES\n" : "NO\n");
    }
    return 0;
}