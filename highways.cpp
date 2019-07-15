/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: International Institute of Technology Hyderabad 
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
#define LL long long
#define inf 0x7fffffff
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vii vector<ppi>
#define vll vector<LL>
#define mp make_pair
using namespace std;

void fastio()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}
void inputread()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}
vector<ppi> adj[100001];
int dijkstra(int n,int s,int d)
{
	vi dist(n+1,inf);
	bool vis[n+1];
	memset(vis,false,sizeof vis);
	priority_queue<ppi,vector<ppi>,greater<ppi>> pq;
	pq.push(mp(0,s));
	dist[s]=0;
	while(!pq.empty())
	{
		ppi p=pq.top();
		pq.pop();
		int u=p.second;
		for(int i=0;i<adj[u].size();i++)
		{
			int v=adj[u][i].first;
			int wt=adj[u][i].second;
			if(vis[v])
				continue;
			if(dist[v]>dist[u]+wt)
			{
				dist[v]=dist[u]+wt;
				pq.push(mp(dist[v],v));
			}
		}
		vis[u]=1;
		if(u==d)
			break;
	}
	return dist[d];
}
int main(){
      
  fastio();
  inputread();
  int n,m,i,j,t,s,d;
  cin>>t;
  while(t--)
  {
  	cin>>n>>m>>s>>d;
  	for(i=0;i<m;i++)
  	{
  		int w,x,y;
  		cin>>x>>y>>w;
  		adj[x].pb(mp(y,w));
  		adj[y].pb(mp(x,w));
  	}
  	int ans=dijkstra(n,s,d);
  	if(ans!=inf)
  		cout<<ans<<"\n";
  	else
  		cout<<"NONE"<<"\n";
  	for(i=1;i<=n;i++)
  		adj[i].clear();

  }
  return 0;
}