#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08

int main(){
    int n;
    cin>>n;

    vector<pair<string,int>>v;
    unordered_map<string,int>finalScore;

    for(int i=0;i<n;i++){
        string name;
        int score;
        cin>>name>>score;

        v.push_back({name,score});
        finalScore[name]+=score;
    }

    int mx=INT_MIN;

    for(auto x:finalScore){
        mx=max(mx,x.second);
    }

    unordered_map<string,int>currentScore;

    for(int i=0;i<n;i++){
        string name=v[i].first;
        int score=v[i].second;

        currentScore[name]+=score;

        if(currentScore[name]>=mx && finalScore[name]==mx){
            cout<<name<<endl;
            return 0;
        }
    }
}