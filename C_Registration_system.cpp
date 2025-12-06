#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
unordered_map<string,int> v;
for(int i=0;i<n;i++){
string s;
cin>>s;
if(v.find(s)==v.end()){
    cout<<"OK"<<endl;
    v[s]=1;
}
else{
    string newn=s+to_string(v[s]);
    cout<<newn<<endl;
    v[s]++;
    v[newn]=1; 
}

}


}