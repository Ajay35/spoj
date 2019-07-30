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
const int N=100001;
vi g[N];
int dp1[N],dp2[N];

void dfs(int cur,int p)
{
	for(int it:g[cur])
	{
		if(it==p)
			continue;
		dfs(it,cur);
		dp1[cur]+=min(dp1[it],dp2[it]);
		dp2[cur]+=dp1[it];
	}
	dp1[cur]+=1;
}


int main()
{      
  fastio();
  input();
  int n,m,i,j,t;
  cin>>n;
  for(i=0;i<n-1;i++)
  {
  	int a,b;
  	cin>>a>>b;
  	g[a].pb(b);
  	g[b].pb(a);
  }
  dfs(1,0);
  cout<<min(dp1[1],dp2[1]);
  
  return 0;
}