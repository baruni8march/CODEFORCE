#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,c,d;
cin>>a>>b>>c>>d;
int mn,mx;
if(a>b){
    mn=b;
    mx=a;
}
else{
    mn=a;
    mx=b;
}
if(c>mn && c< mx){
    if(d<mn || d>mx){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
else if(d>mn && d< mx){
    if(c<mn || c>mx){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
else{
    cout<<"NO"<<endl;}



}



}