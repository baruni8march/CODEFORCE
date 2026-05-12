#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k%2==1){
            for(int i=0;i<k;i++){
                cout<<n<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<0<<" ";
            for(int i=1;i<k;i++){
                cout<<n<<" ";
            }
            cout<<endl;
        }
    }
    
}
