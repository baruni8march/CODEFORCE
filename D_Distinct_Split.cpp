#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>left(n),right(n);
        unordered_set<char>seen;
        seen.clear();
        for(int i=0;i<n;++i){
            seen.insert(s[i]);
            left[i]=seen.size();
        }
        seen.clear();
        for(int i=n-1;i>=0;--i){
            seen.insert(s[i]);
            right[i]=seen.size();
        }

        int max_sum=0;
        for(int i=0;i<n-1;++i){
            max_sum=max(max_sum,left[i]+right[i+1]);
        }
        cout<<max_sum<<"\n";
    }

    return 0;
}
