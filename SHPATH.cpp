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

vector<ppi> adj[10001];
int n;

int shortest_path(int s,int d)
{
	priority_queue<ppi,vector<ppi>,greater<ppi>> pq;
	pq.push(mp(0,s));
	bool vis[n+1];
	memset(vis,false,sizeof vis);
	vector<int> dist(n+1,inf);
	dist[s]=0; 
	while(!pq.empty())
	{
		ppi p=pq.top();
		pq.pop();
		int u=p.second;
		if(vis[u])
			continue;	
		for(int i=0;i<adj[u].size();i++)
		{
			int v=adj[u][i].first;
			int wt=adj[u][i].second;
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
  int m,i,j,t,r;
  string s;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	map<string,int> city;
  	for(i=1;i<=n;i++)
  	{
  		cin>>s;
  		city[s]=i;
  		cin>>m;
  		for(j=1;j<=m;j++)
  		{
  			int v,w;
  			cin>>v>>w;
  			adj[i].pb(mp(v,w));
  		}
  	}
  	cin>>r;
  	while(r--)
  	{
  		string s,d;
  		cin>>s>>d;
  		cout<<shortest_path(city[s],city[d])<<"\n";
  	}
  	for(i=1; i<=n; i++) 
  		adj[i].clear();

  }
  return 0;
}