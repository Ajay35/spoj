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
struct cont
{
	int ox,ni,wt;
};

int dp[1001][25][85];

vector<cont> cinds(1001);
int f(int i,int co,int cn)	
{
	if(dp[i][co][cn]!=-1)
		return dp[i][co][cn];
	if(co==0 and cn==0)
		dp[i][co][cn]=0;
	else if(i==0)
		dp[i][co][cn]=999999999;
	else
		dp[i][co][cn]=min(f(i-1,co,cn),f(i-1,max(co-cinds[i-1].ox,0),max(cn-cinds[i-1].ni,0))+cinds[i-1].wt);
	return dp[i][co][cn];
}
int main()
{      
  fastio();
  input();
  int i,t;
  cin>>t;
  int n,oxy,nit;
  while(t--)
  {
  	cin>>oxy>>nit;
  	cin>>n;
  	for(i=0;i<n;i++)
  	{
  		cin>>cinds[i].ox;
  		cin>>cinds[i].ni;
  		cin>>cinds[i].wt;
  	}
  	memset(dp,-1,sizeof dp);
  	cout<<f(n,oxy,nit)<<"\n";
  }
  return 0;
}