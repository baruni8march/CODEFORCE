#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int p;
 cin>>p;
 vector<int>freq(n+1,0);
 while(p--){
    int x;
    cin>>x;
    freq[x]++;

 }
 int q;
 cin>>q;
 while(q--){
    int x;
    cin>>x;
    freq[x]++;

 }
for(int i=1;i<n+1;i++){
if(freq[i]==0){
    cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
}
cout<<"I become the guy."<<endl;


}