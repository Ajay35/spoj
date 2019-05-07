
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

vector<int> adj[51];
bool vis[51];

void dfs(int i){
	if(vis[i]) return;
	vis[i]=1;
	for(int j=0;j<adj[i].size();j++){
		if(vis[adj[i][j]]!=1){
			dfs(adj[i][j]);
		}
	}
}
		

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m,a,b,c,i;
	cin>>n>>m;

	for(i=0;i<m;i++){
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	
	int x=0;
	memset(vis,0,sizeof vis);
	for(i=1;i<=n;i++){
		if(!vis[i]){
			dfs(i);
			x++;
		}
		
	}
	ll ans=(ll)pow(2,n-x);
	cout<<ans;
	return 0;
}