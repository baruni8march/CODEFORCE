#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
    int odd=0,even=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a%2) odd++;
            else even++;
        }

        bool poss=false;
   for(int k=1;k<=min(x,odd);k+=2){
            if(x-k<=even){
                poss=true;
                break;
            }
        }

        cout<<(poss?"Yes\n":"No\n");
    }
    return 0;
}
