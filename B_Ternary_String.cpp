#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<int,int>mp;
        int l=0;
        int ans=INT_MAX;
        for(int i=0;i<s.size();i++){
            mp[s[i]-'0']++;
           while(mp[1] && mp[2] && mp[3]){
               ans=min(ans,i-l+1);
               mp[s[l]-'0']--;
               l++;
           }

        }
        if(ans==INT_MAX){
            ans=0;
        }
        cout<<ans<<endl;
    }
}