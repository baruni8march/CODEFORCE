#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS: rdsne_08
int main(){
    int a,b;
    cin>>a>>b;
    vector<int>v(b),freq(2000001,0);
    int mx=-1;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        freq[x]++;
        mx= max(mx,x);

    }
    
    int mx2=-1;
    for(int i=0;i<b;i++){
        // int x;
        cin>>v[i];
        // mx2= max(mx2,x);
        // v.push_back(freq[x]);
    }
    for(int i=0;i<mx;i++){
        freq[i]+=freq[i-1];
    }
    for(int i=0;i<b;i++){
        v[i]=freq[v[i]];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


}