#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k1,k2,q1,q2;
        cin>>n>>m>>k1>>k2>>q1>>q2;
        set<pair<int,int>>v1;
        set<pair<int,int>>v2;
        v1.insert({k1+n,k2+m});
        v1.insert({k1+n,k2-m});
         v1.insert({k1-n,k2+m});
         v1.insert({k1-n,k2-m});
         v1.insert({k1+m,k2+n});
         v1.insert({k1+m,k2-n});
         v1.insert({k1-m,k2+n});
         v1.insert({k1-m,k2-n});
         
         v2.insert({q1+n,q2+m});
        v2.insert({q1+n,q2-m});
         v2.insert({q1-n,q2+m});
         v2.insert({q1-n,q2-m});
         v2.insert({q1+m,q2+n});
         v2.insert({q1+m,q2-n});
         v2.insert({q1-m,q2+n});
         v2.insert({q1-m,q2-n});
         int c=0;
for(auto i:v2){

        if(v1.count(i)){
           c++;
        }

    
}
cout<<c<<endl;

        
    }
}