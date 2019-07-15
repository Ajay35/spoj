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
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loope(i,a,b) for(int i=a;i<=b;i++)
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
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
char grid[101][101];
int dis[101][101][16];
struct pos
{
	int x,y,keys;
	pos(){};
	pos(int _x,int _y,int _keys)
	{
		x=_x;
		y=_y;
		keys=_keys;
	}
};

int n,m;
int main()
{      
  fastio();
  input();
  int i,j;
  while(cin>>n>>m)
  {
  	if(n==0 && m==0)
  		break;
  	queue<pos> Q;
  	memset(dis,-1,sizeof dis);
  	for(i=0;i<n;i++)
  	{
  		cin>>grid[i];
  		for(j=0;j<m;j++)
  		{
  			if(grid[i][j]=='*')
  			{
  				Q.push(pos(i,j,0));
  				dis[i][j][0]=0;
  			}
  		}
  	}
  		int ans=-1;

  		while(!Q.empty())
  		{
  			int x=Q.front().x;
  			int y=Q.front().y;
  			int keys=Q.front().keys;
  			Q.pop();
  			if(grid[x][y]=='X')
  			{
  				ans=dis[x][y][keys];
  				break;
  			}
  			for(i=0;i<4;i++)
  			{
  				int nx=x+dx[i];
  				int ny=y+dy[i];
  				if (nx<0 || nx>=n || ny<0 || ny>=m || grid[nx][ny]=='#')
				    continue;
				int nkeys=keys;
				if(grid[nx][ny]=='r') nkeys|=1;
				if(grid[nx][ny]=='g') nkeys|=2;
				if(grid[nx][ny]=='b') nkeys|=4;
				if(grid[nx][ny]=='y') nkeys|=8;

				if(dis[nx][ny][nkeys]!=-1)
					continue;
				if(grid[nx][ny]=='R' && !(nkeys&1)) continue; 
				if(grid[nx][ny]=='G' && !(nkeys&2)) continue;
				if(grid[nx][ny]=='B'&& !(nkeys&4)) continue;
				if(grid[nx][ny]=='Y' && !(nkeys&8)) continue;

				dis[nx][ny][nkeys]=dis[x][y][keys]+1;
				Q.push(pos(nx,ny,nkeys));
  			}
  		}
  		if(ans==-1)
			cout<<"The poor student is trapped!"<<"\n";
		else
			cout<<"Escape possible in "<<ans<<" steps."<<"\n";
   	}
  return 0;
}