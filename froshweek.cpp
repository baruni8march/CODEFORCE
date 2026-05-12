#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int c=0;
for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
        swap(a[i],a[i+1]);
        c++;
    }
}
cout<<c<<endl;
//minimum swaps to sort an array
// int c=0;
// vector<pair<int,int>>v;
// for(int i=0;i<n;i++){
//     v.push_back({a[i],i});
// }
// sort(v.begin(),v.end());
// for(int i=0;i<n;i++){
//     if(v[i].second!=i){
//         swap(v[i],v[v[i].second]);
//         c++;
//     }
// }
// cout<<c<<endl;



}