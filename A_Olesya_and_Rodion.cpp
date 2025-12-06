#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    if(n==1 && k==10){
    cout<<-1<<endl;
} 
else if(k==10)
{    cout<<'1'; 
    for(int i=1;i<n;i++)
        cout<<'0';       
    cout<<endl;
} 
else{
    for(int i=0;i<n;i++)
        cout<<k;
    cout<<endl;
}


}