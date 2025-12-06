#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
	int n,q;cin>>n>>q;
	vector<int>c(n);
	for(int&i:c)cin>>i;


	vector<vector<pair<int,ll>>>g(n);
	vector<tuple<int,int,ll>>e(n-1);
	for(int i=0; i<n-1; i++){
		int u,v;ll w;cin>>u>>v>>w;
    --u;--v;
		g[u].emplace_back(v,w);
		g[v].emplace_back(u,w);
		e[i]={u,v,w};
	}

	int k=ceil(sqrt(2.*(n-1)));

	vector<int>hid(n,-1),d(n);
	for(int i=0;i<n;i++) d[i]=g[i].size();
	int h=0;
	for(int i=0;i<n;i++) if(d[i]>k)hid[i]=h++;
	vector<ll>m(h);
	vector<unordered_map<int,ll>>mp(h);
	vector<vector<pair<int,ll>>>hn(n);
	for(int v=0;v<n;v++){
		for(auto&[u,w]:g[v]){
			if(hid[v]!=-1){
				int x=hid[v];
				m[x]+=w;
				mp[x][c[u]]+=w;
			}
			if(hid[u]!=-1)hn[v].emplace_back(hid[u],w);
		}
	}
	ll ans=0;
	for(auto&[u,v,w]:e)if(c[u]!=c[v]) ans+=w;
	while(q--){
		int v,x; cin>>v>>x;--v;
		int old=c[v];
		if(old==x){cout<<ans<<'\n';continue;}
		int id=hid[v];
		if(id!=-1){
			ll s1=0,s2=0;
			if(mp[id].count(old))s1=mp[id][old];
			if(mp[id].count(x))s2=mp[id][x];
			ans+=s1-s2;
		}else{
			ll s1=0,s2=0;
			for(auto&[u,w]:g[v]){
				if(c[u]!=old)s1+=w;
				if(c[u]!=x)s2+=w;
			}
			ans+=s2-s1;
		}
		for(auto&[i,w]:hn[v]){
			mp[i][old]-=w;
			if(mp[i][old]==0)mp[i].erase(old);
			mp[i][x]+=w;
		}
		c[v]=x;
		cout<<ans<<'\n';
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
  cin>>t;
  while(t--)solve();
}
