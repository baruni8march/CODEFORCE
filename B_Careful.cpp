#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll a,b,c;
cin>>a>>b>>c;
if(a==0 || b==0){
    cout<<"No"<<endl;
}
else if(b>c/a){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;

}
}