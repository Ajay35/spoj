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
struct no
{
	int l,r;
	int sw;
};
const int N=100001;
int a[N];
no tree[4*N];

void build(int node,int st,int en)
{
	if(st==en)
	{
		tree[node].sw=0;
		tree[node].l=a[st];
		tree[node].r=a[st];
		return;
	}
	build(2*node,st,(st+en)/2);
	build(2*node+1,(st+en)/2+1,en);
	no res;
	res.l=tree[2*node].l;
	res.r=tree[2*node+1].r;
	res.sw=(tree[2*node].sw+tree[2*node+1].sw)+(tree[2*node].r>tree[2*node+1].l);
	tree[node]=res;
}
no query(int node,int st,int en,int l,int r)
{
	return 	tree[node];
}
int main()
{      
  fastio();
  input();
  int n,i,t;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	for(i=0;i<n;i++)
  		cin>>a[i];
  	build(1,0,n-1);
  	cout<<query(1,0,n-1,0,n-1).sw<<"\n";
  }
  return 0;
}