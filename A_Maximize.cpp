#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int maxi=0,track;
for(int i=1;i<n;i++){
    int g=__gcd(n,i);
    int ans=g+i;
    if(maxi<=ans){
        maxi=ans;
        track=i;
    }
}


cout<<track<<endl;

}

}