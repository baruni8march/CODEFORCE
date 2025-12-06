#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    for(int i=0;i<n.size();++i){
        int d=n[i]-'0';
        int nd=(i==0 && d==9)? 9 : min(d,9-d);
        cout<<nd;
    }
    cout<<endl;
}
