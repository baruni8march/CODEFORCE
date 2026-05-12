#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
       for(int k=0;k<n-i;k++){
           cout<<"  ";
       }
       for(int j=0;j<=i;j++){
          cout<<j<<" ";
       }
       for(int p=i-1;p>=0;p--){
        cout<<p<<" ";
       }
     cout<<endl;  
    }
    
    for(int i=1;i<=n;i++){
       for(int k=0;k<i;k++){
           cout<<"  ";
       }
       int j;
       for(j=0;j<=n-i;j++){
          cout<<j<<" ";
       }
       if(j!=0){
        for(int p=j-2;p>=0;p--){
        cout<<p<<" ";
       }
       }
       
     cout<<endl;  
    }

}