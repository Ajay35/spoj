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
const int N=101;
vi g[N];
int in_deg[N];

int main()
{      
  fastio();
  input();
  int n,m,i,j,t;
  cin>>n>>m;
  for(i=1;i<=m;i++)
  {
  	int a,b,c;
  	cin>>a>>b;	
  	while(b--)
  	{
  		cin>>c;
  		g[c].pb(a);
  		in_deg[a]++;
  	}
  }
  priority_queue<int,vi,greater<int>> que;
  for(i=1;i<=n;i++)
  {
  	if(in_deg[i]==0)
  		que.push(i);
  }	
  vi ans;
  while(!que.empty())
  {
  	int cur=que.top();
  	ans.pb(cur);
  	que.pop();
  	for(i=0;i<g[cur].size();i++)
  	{
  		if(--in_deg[g[cur][i]]==0)
  			que.push(g[cur][i]);
  	}
  }
  for(i=0;i<ans.size();i++)
  	cout<<ans[i]<<" ";
  return 0;
}