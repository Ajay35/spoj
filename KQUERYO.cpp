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
const int N=30001;
struct no
{
	std::vector<int> v;
};
struct query
{
	int n,t,i,j;	
};
no tree[4*N];
bool cmp(query a,query b)
{
	if(a.n!=b.n)
		return a.n>b.n;
	return a.t>b.t;
}
void build(int node,int st,int en)
{
	if(st==en)
	{
		tree[node].v.pb(a[st]);
		return;
	}
	build(2*node,st,(st+en)/2);
	build(2*node+1,(st+en)/2+1,en);
	merge(tree[2*node].v.begin(),tree[2*node].v.end(),tree[2*node+1].v.begin(),tree[2*node+1].v.end(),back_inserter<vector<int> >(tree[node].v));
}
void update(int node,int st,int en,int ind,int val)
{
	if(st==en)
	{
		tree[node].v.pb(val);
		return;
	}
	int mid=(st+en)/2;
	if(st<=ind && ind<=mid)
		update(2*node,st,mid,ind,val);
	else
		update(2*node+1,mid+1,en,ind,val);
	merge(tree[2*node].v.begin(),tree[2*node].v.end(),tree[2*node+1].v.begin(),tree[2*node+1].v.end(),back_inserter<vector<int> >(tree[node].v));
}
int cnt(int node,int st,int en,int l,int r,int k)
{
	if(st>r or en<l)
		return 0;
	if(l<=st && en<=r)
		return tree[node].v.size()-(upper_bound(tree[node].v.begin(),tree[node].v.end(),k)-tree[node].v.begin());
	return query(2*node,st,(st+en)/2,l,r,k)+query(2*node+1,(st+en)/2+1,en,l,r,k);
}

int main()
{      
  fastio();
  input();
  int n,q,i,j,k;
  vector<query> queries;
  cin>>n;
  for(i=0;i<n;i++)
  {
  	int x;
  	cin>>x;
  	queries.pb({x,1,i,-1});
  }
  cin>>q;
  int ans=0;
  while(q--)
  {
  	int l,r,k;
  	cin>>l>>r>>k;
  	queries.pb({k,2,l,r});	
  }
  sort(queries.begin(),queries.end(),cmp);
  
  for(i=0;i<queries.size();i++)
  {
  	if(queries[i].t==1)
  		update(1,0,n-1);
  	else
  		cout<<cnt(1,0,n-1,l-1,r-1,k)<<"\n";
  }
  
  return 0;
}