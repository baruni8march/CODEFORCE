#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int c25=0,c50=0;
    for(int i=0;i<n;i++){
    if(v[i]==25){
        c25++;
    }
    else if(v[i]==50){
       if(c25==0){
        cout<<"NO"<<endl;
        return 0;
       }
        c25--;
        c50++;
    }
    else{
        if(c25>=1 && c50>=1){
            c25--;
            c50--;
        }
        else if(c25>=3){
            c25-=3;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        

        }
    }
    
    }
   cout<<"YES"<<endl;


}