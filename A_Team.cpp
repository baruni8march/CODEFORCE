#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,co=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
         int sum=a+b+c;
        if(sum>=2){
            co++;
        }
    }
    cout<<co<<endl;
    
}