#include<bits/stdc++.h>
using namespace std;
#define ll long long
//RIDDHI DAS:rdsne_08

ll mnn(string s,vector<int>&d){
    int len=s.size();
    ll best=-1;
    string pref="";

    if(len>1){
        string x="";
        for(int i=0;i<len-1;i++){
            x+=char(d[1]+'0');
        }
        best=max(best,stoll(x));
    }

    for(int i=0;i<len;i++){
        int cur=s[i]-'0';

        for(int j=0;j<2;j++){
            int dig=d[j];

            if(i==0 && len>1 && dig==0){
                continue;
            }

            if(dig<cur){
                string x=pref;
                x+=char(dig+'0');

                for(int k=i+1;k<len;k++){
                    x+=char(d[1]+'0');
                }

                best=max(best,stoll(x));
            }
        }

        bool found=false;

        for(int j=0;j<2;j++){
            if(d[j]==cur){
                found=true;
            }
        }

        if(found==false){
            break;
        }

        pref+=s[i];

        if(i==len-1){
            best=max(best,stoll(s));
        }
    }

    return best;
}

ll hhh(string s,vector<int>&d){
    int len=s.size();
    ll best=LLONG_MAX;
    string pref="";

    int first=-1;

    for(int i=0;i<2;i++){
        if(d[i]!=0){
            first=d[i];
            break;
        }
    }

    string big="";
    big+=char(first+'0');

    for(int i=1;i<len+1;i++){
        big+=char(d[0]+'0');
    }

    best=min(best,stoll(big));

    for(int i=0;i<len;i++){
        int cur=s[i]-'0';

        for(int j=0;j<2;j++){
            int dig=d[j];

            if(i==0 && len>1 && dig==0){
                continue;
            }

            if(dig>cur){
                string x=pref;
                x+=char(dig+'0');

                for(int k=i+1;k<len;k++){
                    x+=char(d[0]+'0');
                }

                best=min(best,stoll(x));
            }
        }

        bool found=false;

        for(int j=0;j<2;j++){
            if(d[j]==cur){
                found=true;
            }
        }

        if(found==false){
            break;
        }

        pref+=s[i];

        if(i==len-1){
            best=min(best,stoll(s));
        }
    }

    return best;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a;
        int n;
        cin>>a>>n;

        vector<int>d(2);
        cin>>d[0]>>d[1];

        string s=to_string(a);

        ll low=mnn(s,d);
        ll high=hhh(s,d);

        ll ans=high-a;

        if(low!=-1){
            ans=min(ans,a-low);
        }

        cout<<ans<<endl;
    }
}