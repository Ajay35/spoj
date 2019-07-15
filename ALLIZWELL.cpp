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
int dx[8]={1,0,-1,0,-1,1,1,-1};
int dy[8]={0,1,0,-1,1,-1,1,-1};

int n,m;
char grid[101][101];
bool vis[101][101];
string mes="ALLIZZWELL";
bool found;

void dfs(int i,int j,int ind)
{
	if(ind>9)
	{
		found=1;
		return;
	}
	if(i>=n or i<0 or j>=m or j<0 or vis[i][j] or !(grid[i][j]<=90 && grid[i][j]>=60) or grid[i][j]!=mes[ind])
		return;
	vis[i][j]=1;
	for(int k=0;k<8;k++)
		dfs(i+dx[k],j+dy[k],ind+1);
	vis[i][j]=0;
}

int main()
{      
  fastio();
  input();
  int i,j,t;
  cin>>t;
  while(t--)
  {
  	vii start;
  	cin>>n>>m;
  	for(i=0;i<n;i++)
  	{
  		for(j=0;j<m;j++)
  		{
  			cin>>grid[i][j];
  			if(grid[i][j]=='A')
  				start.pb(mp(i,j));
  		}
  	}
  	found=0;

  	for(i=0;i<start.size();i++)
  	{
  			dfs(start[i].fi,start[i].se,0);
 			if(found)
 				break;
  	}
  	if(found)
  		cout<<"YES"<<"\n";
  	else
  		cout<<"NO"<<"\n";
  }
  return 0;
}