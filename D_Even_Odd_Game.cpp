#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        ll al=0,bob=0;
        for(ll i=0;i<n;i++){
            if(i%2==0){
                if(v[i]%2==0){
                    al+=v[i];
                }
            }
            else{
                if(v[i]%2!=0){
                    bob+=v[i];
                }
            }
        }
        if(al>bob){
            cout<<"Alice"<<endl;
        }
        else if(bob>al){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Tie"<<endl;
        }
    }

}