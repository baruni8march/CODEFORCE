#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v2[i]=v[i];
    }
    sort(v2.begin(),v2.end());
     
    int l=0,r=n-1;
   while(l<n && v2[l]==v[l]){l++;}
   while(r>=0 && v2[r]==v[r]){r--;}
if(l>r){
    cout<<"yes"<<endl;
    cout<<1<<" "<<1<<endl;
    return 0;
}
reverse(v.begin()+l,v.begin()+r+1);
if(v==v2){
    cout<<"yes"<<endl;
    cout<<l+1<<" "<<r+1<<endl;
    return 0;
}
else{
    cout<<"no"<<endl;
    return 0;

}




}