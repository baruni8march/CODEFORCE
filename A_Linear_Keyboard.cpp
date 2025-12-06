#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string kb,s;
        cin>>kb>>s;
        vector<int>pos(26);
        for(int i=0;i<26;i++){
            pos[kb[i]-'a']=i;  
        }

        int ans=0;

        for(int i=0;i<s.size()-1;i++){
            int a=pos[s[i]-'a'];
            int b=pos[s[i+1]-'a'];
            ans+=abs(a-b);
        }

        cout<<ans<<endl;
    }

    return 0;
}
