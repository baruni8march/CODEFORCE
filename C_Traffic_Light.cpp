#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;

        if(c=='g'){
            cout<<0<<endl;
            continue;
        }

        string s2=s+s;
        int m=s2.size();

        vector<int>nextg(m,-1);
        int last=-1;
 for(int i=m-1;i>=0;i--){
            if(s2[i]=='g')last=i;
            nextg[i]=last;
        }

        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                ans=max(ans,nextg[i]-i);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
