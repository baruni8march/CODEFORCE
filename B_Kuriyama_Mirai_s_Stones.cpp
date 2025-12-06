#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v1,v2;
for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    v1.push_back(x);
}
v2=v1;
sort(v2.begin(), v2.end());
vector<int>sum1(n+1);
vector<int>sum2(n+1);
sum1[0]=0;
for(int i=1;i<=n;i++){
    sum1[i]=sum1[i-1]+v1[i-1];
}
sum2[0]=0;
for(int i=1;i<=n;i++){
    sum2[i]=sum2[i-1]+v2[i-1];
}

int m;
cin>>m;
while(m--){
    int ty,l,r;
    cin>>ty>>l>>r;
    if(ty==1){
        cout<<sum1[r]-sum1[l-1]<<endl;
    }
    else{
        cout<<sum2[r]-sum2[l-1]<<endl;

    }
}




}



