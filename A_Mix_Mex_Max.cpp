#include <bits/stdc++.h>
using namespace std;

int mex(vector<int> &b){
    unordered_set<int>s(b.begin(),b.end());
    for(int i=0;i<=5;i++){
        if(s.find(i)==s.end()){
            return i;}
    }
    return 6;
}

bool isgood(vector<int> &triplet){
    int mx=*max_element(triplet.begin(),triplet.end());
    int mn=*min_element(triplet.begin(),triplet.end());
    int m=mex(triplet);
    return m==(mx-mn);
}

bool good(vector<int>&a,int n){
    for(int i=0;i<=n-3;i++){
        vector<int>t={a[i],a[i+1],a[i+2]};
        bool found=false;

        int cnt=count(t.begin(),t.end(),-1);

        if(cnt==0){
            if(!isgood(t))return false;
        } else{
            
            for(int x=0;x<=4;x++){
                for(int y=0;y<=4;y++){
                    for(int z=0;z<=4;z++){
                        vector<int>temp=t;
                        if(temp[0]==-1)temp[0]=x;
                        if(temp[1]==-1)temp[1]=y;
                        if(temp[2]==-1)temp[2] = z;
                        if(isgood(temp)){
                            found=true;
                            goto NEXT;
                        }
                    }
                }
            }
NEXT:
            if(!found) return false;
        }
    }
    return true;
}

int main(){
    int t; 
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector<int>a(n);
        for(int &x:a){
            cin>>x;
        }
        if(good(a,n)){
            cout<<"YES\n";
        }
        else{
        cout<<"NO\n";}
    }

    return 0;
}
