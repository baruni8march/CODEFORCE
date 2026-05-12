#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    priority_queue<pair<ll,ll>> pq;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        ll rem=x%k;
        if(rem==0){
            rem=k;
        }
        pq.push({rem,-i});
    }
    vector<int>order;
    while(!pq.empty()){
     order.push_back(-pq.top().second);
     pq.pop();
    }
    for(int i=0;i<order.size();i++){
        cout<<order[i]+1<<" ";
    }
    cout<<endl;



}





}