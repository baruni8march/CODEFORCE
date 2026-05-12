#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       int left=0;
         int right=0;
       for(int i=0;i<n;i++){
        if(s[i]=='('){
            left++;
        }
        else{
            right++;
        }
       }
       if(left==right){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
}