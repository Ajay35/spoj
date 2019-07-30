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
const int N=250;
int sh,wo;
char grid[N][N];
bool vis[N][N];
bool valid(int i,int j,int n,int m)
{
	return (i>=0 && i<n && j>=0 && j<m && grid[i][j]!='#' && !vis[i][j]);
}
pair<int,int> dfs(int i,int j,int n,int m)
{
	if(!valid(i,j,n,m))
		return mp(sh,wo);
	vis[i][j]=1;
	if(grid[i][j]=='k') sh++;
	if(grid[i][j]=='v') wo++;
	dfs(i+1,j,n,m);
	dfs(i-1,j,n,m);
	dfs(i,j+1,n,m);
	dfs(i,j-1,n,m);
}
int main()
{      
  fastio();
  input();
  int n,m,i,j,w=0,s=0;
  cin>>n>>m;
  for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
  	{
  		cin>>grid[i][j];
  		if(grid[i][j]=='k')
  			s++;
  		if(grid[i][j]=='v')
  			w++;
  	}
  }
  for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
  	{
  		sh=0;
  		wo=0;
  		dfs(i,j,n,m);
  		if(sh>wo)
  			w-=wo;
  		else
  			s-=sh;
  	}
  }
  cout<<s<<" "<<w;
  return 0;
}