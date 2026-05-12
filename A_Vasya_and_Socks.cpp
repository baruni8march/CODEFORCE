#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int s=n;
    int day=0;

    while(s>0){
        day++;       
        s--;     

        if(day%m==0){
            s++;}
    }

    cout<<day<<endl;
    return 0;
}
