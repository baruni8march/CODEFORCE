#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    vector<string>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        string s="";

        for(int i=0;i<n;i++){
            if(s.empty()){
                s=a[i];
            } 
         else{
           string frst=a[i]+s;
           string sec=s+a[i];
                if(frst<sec){
                    s=frst;
                } 
            else{
              s=sec;
                }
            }
        }

        cout<<s<<endl;
    }
    
}
