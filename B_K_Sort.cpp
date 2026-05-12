#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v(n), need(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        long long mx_val = v[0];
        for(int i=0;i<n;i++){
            if(v[i] < mx_val){
                need[i] = mx_val - v[i];
            }
            else{
                mx_val = v[i];
                need[i] = 0;
            }
        }

        long long sum = 0, mx = 0;
        for(int i=0;i<n;i++){
            sum += need[i];
            mx = max(mx, need[i]);
        }

        cout << sum + mx << endl;
    }
}