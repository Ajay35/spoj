/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: Indian Institute of Technology Hyderabad 
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

int p[100005];
int sz[100005];

int find(int x)
{
	return (x==p[x])?x:p[x]=find(p[x]);
}

void join(int u,int v)
{
	u=find(u);
	v=find(v);
	if(u==v) 
		return;

	if(sz[u]>=sz[v])
	{
		sz[u]+=sz[v];
		p[v]=u;
	}
	else
	{
		sz[v]+=sz[u];
		p[u]=v;
	}
}

int main(){
      
  fastio();
  inputread();
  int n,m,i,j,a,b;
  cin>>n>>m;

  for(i=1;i<=n;i++)
  {
  	p[i]=i;
  	sz[i]=1;
  }

  for(i=0;i<m;i++)
  {
  	cin>>a>>b;
  	join(a,b);
  }
  for(i=1;i<=n;i++)
  {
  	int s=sz[find(i)];
  	cout<<s-1<<" ";

  }
  return 0;
}