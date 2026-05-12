#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    long long allmin=LLONG_MAX;
    long long minsec=LLONG_MAX;
    long long sumsec=0;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<long long>a(m);
        for(int j=0;j<m;j++){
            cin>>a[j];
        }
        sort(a.begin(),a.end());
        long long fmin=a[0];
        long long fmins=a[1];
        allmin=min(allmin,fmin);
        sumsec+=fmins;
        minsec=min(minsec,fmins);
    }
    long long ans=sumsec+allmin-minsec;
    cout<<ans<<endl;
  }


}