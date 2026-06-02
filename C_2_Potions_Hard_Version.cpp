#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08
int main(){
    ll n;
    cin>>n;
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        pq.push(x);
        sum+=x;
        if(sum<0){
            sum-=pq.top();
            pq.pop();
        }
    }
    cout<<pq.size()<<endl;
}