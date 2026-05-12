#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int>v1(a);
    for(int i=0;i<a;i++){
        cin>>v1[i];
    }
    int b;
    cin>>b;
    vector<int>v2(b);
    for(int i=0;i<b;i++){
        cin>>v2[i];
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int sm;
    // if(a<=b){
    //     sm=a;
    // }
    // else{
    //     sm=b;
    // }
    int c=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(v1[i]!=-1 && v2[j]!=-1 && abs(v1[i]-v2[j])<=1){
                c++;
                v1[i]=-1;
                v2[j]=-1;
                break;
            }
        }
    }

    cout<<c<<endl;

}
