#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>left(n,-1);
        vector<int>right(n,-1);
        int mn=0;
        for(int j=1;j<n;j++){
            if(v[mn]<v[j]){
                left[j]=mn;
            }
            if(v[mn]>v[j]){
                mn=j;
            }
        }  
        mn=n-1;
        for(int j=n-2;j>=0;j--){
            if(v[mn]<v[j]){
                right[j]=mn;
            }
            if(v[mn]>v[j]){
                mn=j;

            }
        }  
        bool found=false;
        for(int j=0;j<n;j++){
            if(left[j]!=-1 && right[j]!=-1){
                cout<<"YES"<<endl;
                cout<<left[j]+1<<" "<<j+1<<" "<<right[j]+1<<endl;

                found=true;
                break;
            }
        }
        if(!found){
            cout<<"NO"<<endl;

        }
    }

}