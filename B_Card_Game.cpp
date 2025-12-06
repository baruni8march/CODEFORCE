#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;

        vector<int>A={a1,a2};
        vector<int>B={b1,b2};

        int ans=0;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                int sun=0;
                int slav=0;
            
    if(A[i]>B[j])sun++;
                else if(A[i]<B[j]) slav++;
        if(A[1-i]>B[1-j])sun++;
                else if(A[1-i]<B[1-j])slav++;

                if(sun>slav)
                    ans++;
            }
        }

        cout<<ans<<endl;
    }
}
