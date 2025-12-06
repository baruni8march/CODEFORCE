#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,s;
    cin>>m>>s;
    if((s==0 && m>1) || s>9*m) {
        cout<<"-1 -1"<<endl;
        return 0;
    }

    int sum=s;
    string maxnum="";
    for(int i=0;i<m;i++){
        int d=min(9,sum);
        maxnum+=(d+'0');
        sum-=d;
 
    }
string minnum=maxnum;
reverse(minnum.begin(),minnum.end());
if(minnum[0]=='0'){
    for(int i=1;i<m;i++){
        if(minnum[i]!='0'){
            minnum[i]--;
            minnum[0]='1';
            break;
                }
    }
}
cout<<minnum<<" "<<maxnum<<endl;
return 0;


}