/**
*	  Name: Ajay
*	  Institute: IIITH 
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <deque>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <ctime>
#include <string.h>
#define ll  long long
#define inf 0x7fffffff
#define mod (int)1e9
#define pb  push_back
#define ppi pair<int,int>
#define vi  vector<int>
#define vvi vector<vector<int>>
#define vii vector<ppi>
#define vll vector<ll>
#define mp  make_pair
#define fi  first
#define se  second
using namespace std;

void fastio()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}
void input()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}
const int N=100001;

vi g[N];
int in_deg[N];
int out_deg[N];
ll dp[N];
bool vis[N];

ll dfs(int u)
{
	if(out_deg[u]==0)
		return 0;
	if(dp[u]==-1)
		dp[u]=0;
	for(int i=0;i<(int)g[u].size();i++)
	{
		int v=g[u][i];
		if(dp[v]!=-1)
			dp[u]+=1+dp[v];
		else
			dp[u]+=1+dfs(v);
	}
	return dp[u];
}

int main()
{      
  fastio();
  input();
  memset(vis,false,sizeof vis);
  int n,m,i,j;
  ll ans=0;
  cin>>n>>m;
  for(i=1;i<=m;i++)
  {
  	int u,v;
  	cin>>u>>v;
  	g[u].pb(v);
  	in_deg[v]++;
  	out_deg[u]++;
  }
  vi st;
  for(i=1;i<=n;i++)
  	if(in_deg[i]==0)
		st.pb(i);
  memset(dp,-1,sizeof dp);
  ll tmp=0;
  for(i=0;i<(int)st.size();i++)
  {
  	if(in_deg[i]==0)
  		ans+=dfs(st[i]);
  }
  
  cout<<ans;
  return 0;
}

