/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: International Institute of Information Technology Hyderabad 
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
#define fi first
#define se second
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
int n,m,t;
vector<ppi> adj[101];
int dijkstra(int d)
{
	int mice=0;
	for(int j=1;j<=n;j++)
	{
		int dis[n+1];
		bool vis[n+1];
		memset(vis,false,sizeof vis);
		for(int i=0;i<=n;i++)
			dis[i]=inf;
		dis[j]=0;
		priority_queue<ppi,vector<ppi>,greater<ppi>> pq;
		pq.push(mp(0,j));
		while(!pq.empty())
		{
			ppi up=pq.top();
			pq.pop();
			int u=up.se;
			for(int k=0;k<adj[u].size();k++)
			{
				int v=adj[u][k].fi;
				int w=adj[u][k].se;
				if(dis[v]>dis[u]+w)
				{
					dis[v]=dis[u]+w;
					pq.push(mp(dis[v],v));	
				}
			}
			if(u==d)
			{
				//cout<<"found:"<<j<<" "<<u<<" "<<dis[u]<< endl;
				if(dis[u]<=t)
					mice++;
				break;
			}
			vis[u]=1;
		}
	}
	return mice;
}
int main()
{      
  fastio();
  input();
  int e,i;
  cin>>n>>e>>t>>m;
  for(i=0;i<m;i++)
  {
  	int a,b,w;
  	cin>>a>>b>>w;
  	adj[a].pb(mp(b,w));
  }
  cout<<dijkstra(e);
  return 0;
}