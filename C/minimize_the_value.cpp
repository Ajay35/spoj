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



vi adj[100001];
LL v[100001];
bool vis[100001];
bool used=0;
LL n,x;

void add()
{
	queue<LL> que;
	que.push(1);
	while(!que.empty())
	{
		LL u=que.front();
		que.pop();
		vis[u]=1;
		if(u==1 && adj[u].size()<2)
		{
			adj[u].pb(n+1);
			v[n+1]=x;
			return;
		}
		if(u!=1 && adj[u].size()<3)
		{
			adj[u].pb(n+1);
			v[n+1]=x;
			return;
		}
		
		for(int i=0;i<adj[u].size();i++)
		{
			if(!vis[adj[u][i]])
				que.push(adj[u][i]);
		}
		
	}

}

LL dfs(int i)
{
	vis[i]=1;
	for(int j=0;j<adj[i].size();j++)
	{
		if(!vis[adj[i][j]])
			v[i]+=dfs(adj[i][j]);
	}
	return v[i];
}

int main()
{
      
  fastio();
  inputread();
  int i,j,t;
  unsigned LL s=0;
  cin>>n>>x;
  for(i=1;i<=n;i++)
  	cin>>v[i];

  for(i=1;i<=n-1;i++)
  {
  	int a,b;
  	cin>>a>>b;
  	adj[a].pb(b);
  	adj[b].pb(a);
  }
  memset(vis,false,sizeof vis);
  add();
  memset(vis,false,sizeof(vis));
  dfs(1);
  

  for(i=1;i<=n+1;i++)
  	s+=v[i];

  cout<<s;
  return 0;
}