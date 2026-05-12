#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDHI DAS:rdsne_08
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<ll,ll>mp;
    mp[0]=1;
    ll pre=0;
    ll ans=0;
    for(int i=0;i<n;i++){
        pre+=((s[i]-'0')-1);
        ans+=mp[pre];
        mp[pre]++;

    }
    cout<<ans<<endl;



   }

}