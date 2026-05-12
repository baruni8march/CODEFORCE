#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
int n;
cin>>n;
vector<int>a(n),freq(n+1,0);
for(int i=0;i<n;i++){
    cin>>a[i];
    freq[a[i]]++;}
    int dis=0,mx=0;
    for(int i=0;i<n+1;i++){
        if(freq[i]!=0){
            dis++;
        }
        if(freq[i]>=2){
            mx=max(mx,freq[i]);
        }

    }
if(n==1){
    cout<<0<<endl;
}
else if(mx==0){
    cout<<1<<endl;
}
else{
   if(mx==dis){
    cout<<mx-1<<endl;
   }
    else{
     cout<<min(mx,dis)<<endl;}
}
   
    }




}

