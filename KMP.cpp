#include <bits/stdc++.h>
using namespace std;

vector<int> LPS(const string &pattern) {
    int m = (int)pattern.length();
    vector<int> lps(m, 0);
    if (m == 0) return lps;
    int len = 0;
    int i = 1;
    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

vector<int> KMP(const string &pattern, const string &text) {
    vector<int> match;
    int m = (int)pattern.size();
    int n = (int)text.size();
    if (m == 0 || m > n) return match;
    vector<int> lps = LPS(pattern);
    int i = 0, j = 0;
    while (i < n) {
        if (pattern[j] == text[i]) {
            i++; j++;
        }
        if (j == m) {
            match.push_back(i - j);
            j = lps[j - 1];
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0) j = lps[j - 1];
            else i++;
        }
    }
    return match;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string pattern, text;
    if (!(cin >> pattern >> text)) return 0;
    vector<int> match = KMP(pattern, text);
    for (size_t k = 0; k < match.size(); ++k) {
        if (k) cout << ' ';
        cout << match[k];
    }
    cout << '\n';
    return 0;
}
