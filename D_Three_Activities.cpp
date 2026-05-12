#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> top3(vector<int>&v){
    vector<pair<int,int>> temp;

    for(int i=0;i<v.size();i++){
        temp.push_back({v[i],i});
    }

    sort(temp.rbegin(),temp.rend());

    vector<pair<int,int>> res;

    for(int i=0;i<3;i++){
        res.push_back(temp[i]);
    }

    return res;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>a(n),b(n),c(n);

        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++) cin>>c[i];

        vector<pair<int,int>> av=top3(a);
        vector<pair<int,int>> bv=top3(b);
        vector<pair<int,int>> cv=top3(c);

        int ans=0;

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    int idx1=av[i].second;
                    int idx2=bv[j].second;
                    int idx3=cv[k].second;

                    if(idx1!=idx2 && idx1!=idx3 && idx2!=idx3){
                        ans=max(ans,av[i].first+bv[j].first+cv[k].first);
                    }
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}