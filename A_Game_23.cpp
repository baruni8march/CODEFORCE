#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(m%n!=0){
        cout<<-1<<endl;
        return 0;
    }
    int k=m/n;
    int x=0,y=0;
    while(k%2!=0){
      x++;
      k=k/2;
    }
    while(k%3!=0){
      y++;
      k=k/3;
    }
    if(k!=1){
        cout<<-1<<endl;
        return 0;

    }
    cout<<x+y<<endl;

}