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
const int N=10001;
struct edge
{
  int u,v,w;
};
bool cmp(edge a,edge b)
{
  return a.w<b.w;
}

int p[N],sz[N];

int find(int x)
{
  return x==p[x]?x:p[x]=find(p[x]);
}
bool is_same_set(int x,int y)
{
  return find(x)==find(y);
}
void unite(int x,int y)
{
  if(!is_same_set(x,y))
  {
    sz[find(y)]+=sz[find(x)];
    p[find(x)]=find(y);
  }
}
int main()
{      
  fastio();
  input();
  int n,P,i,j,t;
  cin>>t;
  while(t--)
  {
    vector<edge> edges;
  	string x;
  	cin>>n;
  	for(i=1;i<=n;i++)
  	{
  		int neigh,cost;
  		cin>>x>>P;
      while(P--)
      {
  		  cin>>neigh>>cost;
  		  edges.pb({i,neigh,cost});
        edges.pb({neigh,i,cost});
      }
  	}
    sort(edges.begin(),edges.end(),cmp);



    int mst_cost=0;

    for(i=1;i<=n;i++)
    {
      p[i]=i;
      sz[i]=1;
    }
    for(i=0;i<edges.size();i++)
    {
      edge e=edges[i];
      if(!is_same_set(e.u,e.v))
      {
        mst_cost+=e.w;
        unite(e.u,e.v);
      }
    }
    cout<<mst_cost<<"\n";
  }
  return 0;
}