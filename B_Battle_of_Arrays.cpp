#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long>a(n),b(m);
        for (auto &x:a) cin>>x;
        for (auto &x:b) cin>>x;
int alice=1;
        while(a.size()>=0||b.size()>=0){

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int x=a[a.size()-1];
    int y=b[b.size()-1];
    if(alice){
        if(y<=x){
            b.pop_back();
        }
        else{
            y-=x;
        }
        alice=0;
    }
    else{
        if(x<=y){
            a.pop_back();
        }
        else{
            x-=y;
        }
        alice=1;
    }

}
if(b.size()==0){
    cout<<"Alice"<<endl;
}
else{
    cout<<"Bob"<<endl;




}


}
