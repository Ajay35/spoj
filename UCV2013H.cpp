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
int map1[100001];
char grid[N][N];
int sz;
bool valid(int i,int j,int n,int m)
{
	return (i>=0 && i<n && j>=0 && j<m && grid[i][j]!='0');
}
void dfs(int i,int j,int n,int m)
{
	if(!valid(i,j,n,m))
		return;
	grid[i][j]='0';
	sz++;
	dfs(i+1,j,n,m);
	dfs(i-1,j,n,m);
	dfs(i,j+1,n,m);
	dfs(i,j-1,n,m);
}
int main()
{      
  fastio();
  input();
  int n,m,i,j,t;
  while(cin>>n>>m)
  {
  	  int c=0;
	  if(n==0 && m==0) break;
	  for(i=0;i<n;i++)
	  	for(j=0;j<m;j++)
	  		cin>>grid[i][j];
	  for(i=0;i<n;i++)
	  {
	  	for(j=0;j<m;j++)
	  	{
	  		if(grid[i][j]=='1')
	  		{
	  			sz=0;
	  			c++;
	  			dfs(i,j,n,m);
	  			map1[sz]++;
	  		}
	  	}
	  }
	  cout<<c<<"\n";
	  for(i=1;i<=(250*250);i++)
	   if(map1[i]!=0)
	   		cout<<i<<" "<<map1[i]<<"\n";
	  memset(map1,0,sizeof map1);
  }
  return 0;
}