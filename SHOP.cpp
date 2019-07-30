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
#define ll long long
#define inf 0x7fffffff
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<ppi>
#define vll vector<ll>
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

char grid[26][26];
int h[4]={0,1,-1,0};
int v[4]={1,0,0,-1};


int bfs(int sx,int sy,int dx,int dy,int n,int m)
{
	int ans=inf;
	bool vis[n][m];
	memset(vis,false,sizeof vis);
	queue<pair<int,ppi>> que;
	que.push(mp(0,mp(sx,sy)));
	vis[sx][sy]=1;
	while(!que.empty())
	{
		pair<int,ppi> cur=que.front();
		que.pop();
		int cx=cur.se.fi;
		int cy=cur.se.se;
		int cost=cur.fi;
		if(isdigit(grid[cx][cy]))
			cost+=(grid[cx][cy]-'0');
		for(int i=0;i<4;i++)
		{
			int to_x=cx+h[i];
			int to_y=cy+v[i];
			//cout<<to_x<<" "<<to_y<<" "<<cost<<"\n";
			if(to_x<n && to_x>=0 && to_y>=0 && to_y<m && !vis[to_x][to_y])
			{
				if(grid[to_x][to_y]=='D')
					return cost;
				else
				{
					vis[to_x][to_y]=1;
					que.push(mp(cost,mp(to_x,to_y)));
				}
			}
		}
	}
	return ans;
}
int main()
{      
  fastio();
  input();
  int n,m,i,j,t;
  while(cin>>n>>m)
  {
  	if(n==0 && m==0)
  		break;
  	swap(n,m);

  	int sx,sy,dx,dy,ans=inf;
  	for(i=0;i<n;i++)
  	{
  		for(j=0;j<m;j++)
  		{
  			cin>>grid[i][j];
  			if(grid[i][j]=='S')
  			{
  				sx=i;
  				sy=j;
  			}
  			if(grid[i][j]=='D')
  			{
  				dx=i;
  				dy=j;
  			}
  		}
  	}
  	cout<<bfs(sx,sy,dx,dy,n,m)<<"\n";
  }
  return 0;
}