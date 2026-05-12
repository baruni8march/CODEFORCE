#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool found=false;
        for(int i=0;i<=10;i++){
            int rem=n-(111*i);
            if(rem>=0 && rem%11==0){
                found=true;                break;
            }
        }
        if(found){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}