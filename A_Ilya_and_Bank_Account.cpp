#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    if(n>=0){
        cout<<n<<endl;
    }
    else{
     int a=n/10;
     int r=n%10;
     int q=n/100;
     int b=q*10+r;
     
     cout<<max(a,b)<<endl;



    }
}