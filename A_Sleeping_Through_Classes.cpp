#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        string s;
        cin>>n>>k>>s;

        vector<bool>v(n,false);
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                for(int j=i;j<=i+k && j<n;j++){
                    v[j] = true;
                }
            }
        }

        int c=0;
        for(int i=0;i<n;i++){
            if(!v[i])c++;
        }

        cout<<c<<endl;
    }

    return 0;
}
