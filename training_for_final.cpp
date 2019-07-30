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

int main()
{      
  fastio();
  input();
  int x,y,n,m,i,j;
  cin>>n>>m;
  cin>>x>>y;
  int grid[n+1][m+1];
  for(i=1;i<=n;i++)
  	for(j=1;j<=m;j++)
  		cin>>grid[i][j];
  
  for(i=x;i<=n;i++)
  {
  	for(j=y;j<=m;j++)
  	{
  		if(i==x or j==y)
  		{
  			if(i==x && j>y)
  				grid[i][j]=grid[i][j-1]-grid[i][j];
  			else if(i>x && j==y)
  				grid[i][j]=grid[i-1][j]-grid[i][j];
  		}
  		else
  			grid[i][j]=max(grid[i-1][j]-grid[i][j],grid[i][j-1]-grid[i][j]);
  	}
  }
  if(grid[n][m]>=0)
  	cout<<"Y "<<grid[n][m];
  else
  	cout<<"N";
  return 0;
}