#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c, k = 0;
        cin >> n >> c;
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x > c) {
                k++;
            } else {
                v.push_back(x);
            }
        }
        multiset<int> ms(v.begin(), v.end());
        int ans = k;
        while (ms.size() > 1) {
            auto it1 = ms.begin();
            auto it2 = next(it1);
            if (*it1 + *it2 <= c) {
                int sum = *it1 + *it2;
                ms.erase(it1);
                ms.erase(ms.begin()); // erase the new begin (old it2)
                ms.insert(sum);
            } else {
                ms.erase(it1);
                ans++;
            }
        }
        if (!ms.empty()) ans++;
        cout << ans << endl;
    }
}
