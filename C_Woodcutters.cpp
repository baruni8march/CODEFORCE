#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }

    if(n==1){
        cout<<1<<endl;
        return 0;
    }

    int ans=2;
    int last=v[0].first;

    for(int i=1;i<n-1;i++){
        int x=v[i].first;
        int h=v[i].second;

        if(x-h>last){
            ans++;
            last=x;
        }
        else if(x+h<v[i+1].first){
            ans++;
            last=x+h;
        }
        else{
            last=x;
        }
    }

    cout<<ans<<endl;
}