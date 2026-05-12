#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,e=0,o=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    if(a[i]%2==0){
        e++;
    }
    else{
        o++;
    }
    }
    if(e%2==0 ){
        cout<<"YES"<<endl;
    }
    else{
        int prob=1;
        sort(a.begin(),a.end());
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]==1){
                cout<<"YES"<<endl;
                  prob=0;
                break;
              
            }
        }
        if(prob){
            cout<<"NO"<<endl;
        }




    }
    
    
    }
}