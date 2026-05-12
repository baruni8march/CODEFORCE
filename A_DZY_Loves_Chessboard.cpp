#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;

    vector<string>v(r);

    for(int i=0;i<r;i++){
        cin>>v[i];
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(v[i][j]=='.'){
                if((i+j)%2==0){
                    v[i][j]='B';
                }
                else{
                    v[i][j]='W';
                }
            }
        }
    }

    for(int i=0;i<r;i++){
        cout<<v[i]<<endl;
    }

    return 0;
}