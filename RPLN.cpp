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
const int N=100001;

int a[N],tree[4*N];
void build(int n,int s,int e)
{
	if(s==e)
	{
		tree[n]=a[s];
		return;
	}
	int mid=(s+e)/2;
	build(2*n,s,mid);
	build(2*n+1,mid+1,e);
	tree[n]=min(tree[2*n],tree[2*n+1]);
}

int query(int n,int s,int e,int l,int r)
{
	if(l<=s && e<=r)
		return tree[n];
	int mid=(s+e)/2;
	if(r<=mid)
		return query(2*n,s,mid,l,r);
	if(l>mid)
		return query(2*n+1,mid+1,e,l,r);

	return min(query(2*n,s,mid,l,r),query(2*n+1,mid+1,e,l,r));
}
int main()
{      
  fastio();
  input();
  int n,q,i,j,t;
  cin>>t;
  for(j=1;j<=t;j++)
  {
  	cin>>n>>q;
  	for(i=0;i<n;i++)
  		cin>>a[i];
  	build(1,0,n-1);
  	cout<<"Scenario #"<<j<<":\n";
  	while(q--)
  	{
  		int l,r;
  		cin>>l>>r;
  		cout<<query(1,0,n-1,l-1,r-1)<<"\n";
  	}
  }
  return 0;
}