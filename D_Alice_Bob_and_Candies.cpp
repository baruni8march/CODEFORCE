#include<bits/stdc++.h>
using namespace std;
//RIDDHI DAS:rdsne_08
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

        int l=0,r=n-1;
        int ls=0;
        int a=0,b=0;
        int c=0;
        int turn=1;

        while(l<=r){
            int curr=0;

            if(turn){
                while(l<=r && curr<=ls){
                    curr+=v[l];
                    l++;
                }
                a+=curr;
                turn=0;
            }
            else{
                while(l<=r && curr<=ls){
                    curr+=v[r];
                    r--;
                }
                b+=curr;
                turn=1;
            }

            ls=curr;
            c++;
        }

        cout<<c<<" "<<a<<" "<<b<<endl;
    }
}