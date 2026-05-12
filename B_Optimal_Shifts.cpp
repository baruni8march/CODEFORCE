#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>ones;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ones.push_back(i);
        }}

        int ans=0;

        for(int i=0;i<n;i++){
            if(s[i]=='0'){
        auto it=lower_bound(ones.begin(),ones.end(),i);
                int dist;

         if(it!=ones.end()){
            dist=*it-i;
           }
             else{
            dist=n-i+ones[0]; 
             }
                
            ans=max(ans,dist);
            }
        }

        cout<<ans<<endl;
    }
}
