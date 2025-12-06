#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
vector<int>v(n);
for(int i=0;i<n;i++ ){
    cin>>v[i];
}
int sum=0;
for(int i=0;i<k;i++){
    sum+=v[i];
}
int mini=sum,minid=0;
for(int i=k;i<n;i++){
    sum+=v[i]-v[i-k];
    if(sum<mini){
        mini=sum;
        minid=i-k+1;
}

}
cout<<minid+1<<endl;

}