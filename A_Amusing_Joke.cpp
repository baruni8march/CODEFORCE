#include<bits/stdc++.h>
using namespace std;
int main(){
string a,b,c;
cin>>a>>b>>c;
vector<int>freq(26,0),freq2(26,0);
for(int i=0;i<a.length();i++){
    freq[a[i]-'A']++;
}
for(int i=0;i<b.length();i++){
    freq[b[i]-'A']++;
}
for(int i=0;i<c.length();i++){
    freq2[c[i]-'A']++;
}
for(int i=0;i<26;i++){
    if(freq[i]!=freq2[i]){
        cout<<"NO"<<endl;
        return 0;
    }
}
cout<<"YES"<<endl;
return 0;


}