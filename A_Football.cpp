#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    unordered_map<string,int>goals;

    for(int i=0;i<n; i++){
        string team;
        cin>>team;
        goals[team]++;    }

    string win;
    int mx=0;

    for(auto i:goals){
        if(i.second>mx){
            mx=i.second;
            win=i.first;
        }
    }

    cout<<win<<endl;

    return 0;
}
