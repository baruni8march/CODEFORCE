#include <bits/stdc++.h>
using namespace std;

int ops_for_2(int x){
    int cnt=0;
    while(x%2==0){cnt++;x/=2;}
    return cnt;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        vector<int>v(6,0);
        
        for(int x:a){
            int y=x;
            
            while(y%2==0){v[2]++;y/=2;}
            while(y%3==0){v[3]++;y/=3;}
            while(y%5==0){v[5]++;y/=5;}
        }

        int ans=INT_MAX;

        if(k==2) ans=(v[2]>=1 ? 0: 1);
        else if(k==3){
            if(v[3]>=1)ans=0;

            else for(int x:a){
            ans=min(ans,(3-x%3)%3);
        }}
        else if(k==5){
            if(v[5]>=1)ans=0;
            else{ for(int x:a)ans=min(ans,(5-x%5)%5);
        }}
        else if(k==4){
            if(v[2]>=2)ans=0;
            else{
                int needed=2-v[2];
                vector<int>op(n,0);
                for(int i=0;i<n;i++){
                    int twos=ops_for_2(a[i]);
                    if(a[i]%2==1){
                        if(a[i]==1)op[i]=2;
                        else if(a[i]==3)op[i]=1;
                        else op[i]=2;
                    }else{
                        if(twos==1)op[i]=1;
                        else op[i]=0;
                    }
                }
                sort(op.begin(),op.end());
                ans=0;
                for(int i=0;i<needed;i++)ans+=op[i];
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
