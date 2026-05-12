#include <bits/stdc++.h>
using namespace std;
string add(string a,string b){
    string ans="";
    int c=0;
    if(a.length()<b.length())swap(a,b);
    int n1=a.length();
    int n2=b.length();
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    for(int i=0;i<n2;i++){
        int sum=(a[i]-'0')+(b[i]-'0')+c;
        ans.push_back((sum%10)+'0');
        c=sum/10;
    }

    for(int i=n2;i<n1;i++){
        int sum=(a[i]-'0')+c;
        ans.push_back((sum%10)+'0');
        c=sum/10;
    }

    if(c)ans.push_back(c+'0');

    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<string>fib(5001);
    fib[0]="0";
    fib[1]="1";
    for(int i=2;i<=5000;i++){
        fib[i]=add(fib[i-1],fib[i-2]);
    }

    int n;
    while(cin>>n){
        cout<<"The Fibonacci number for "<<n<<" is "<<fib[n]<<"\n";
    }

    return 0;
}
