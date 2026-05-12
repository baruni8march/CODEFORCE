#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
    cin>>t;

    while(t--){
        long long n, m, i, j;
        cin>>n>>m>>i>>j;
vector<pair<long long,long long>>corners={
            {1, 1},
            {1, m},
            {n, 1},
            {n, m}
        };
    sort(corners.begin(),corners.end(),
             [&](const pair<long long,long long>& a,
                 const pair<long long,long long>& b){
                 long long da=llabs(a.first-i)+llabs(a.second-j);
                 long long db=llabs(b.first-i)+llabs(b.second-j);
                 return da>db;
             });
        cout<<corners[0].first<<" "<<corners[0].second<<" "
             <<corners[1].first<<" "<<corners[1].second<<"\n";
    }

    return 0;
}
