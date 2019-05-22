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
int number_of_groups;
int find(int x)
{
	while(x!=p[x])
		x=p[x];
	return p[x];
}
void join(int u,int v)
{
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

	number_of_groups--;
}
int main(){
      
  fastio();
  inputread();
  int n,m,i,a,b;
  cin>>n>>m;
  for(i=1;i<=n;i++)
  {
  	p[i]=i;
  	sz[i]=1;
  }
  number_of_groups=n;
  for(i=0;i<n;i++)
  {
  	cin>>a>>b;
  	a=find(a);
  	b=find(b);
  	if(a!=b)
  		join(a,b);
  }

  LL res=1;
  int count[n+1],k=0;
  for(i=1;i<=n;i++)
  {
      if(p[i]==i)
          count[k++]=sz[i];
  }
  for(i=0;i<k;i++){
      res=(res*count[i])%mod;
  }
  cout<<res;
  return 0;
}