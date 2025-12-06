#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>p(n + 1);

    for(int i=1;i<=n;i++){
        cin>>p[i];
    }

    int maxD=0;
    for(int i=1;i<=n;i++){
        int d=0;
        int x=i;
        while(x!=-1){
            d++;
            x=p[x];  
        }

        maxD=max(maxD,d);
    }

    cout<<maxD<<endl;
    return 0;
}
