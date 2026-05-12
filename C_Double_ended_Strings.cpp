#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
   int t;
   cin>>t;
   while(t--){
    string a,b;
    cin>>a>>b;
    int mx=0;

    int m=a.length();
    int n=b.length();

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int c=0;
            while(i+c<m && j+c<n && a[i+c]==b[j+c]){
                c++;
            }
            mx=max(mx,c);
        }
    }

    cout<<(m-mx)+(n-mx)<<endl;
   }
}