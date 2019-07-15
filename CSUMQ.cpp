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

ll a[N],tree[4*N];

void build(int n,int s,int e)
{
	if(s==e)
	{
		tree[n]=a[s];
		return;
	}
	build(2*n,s,(s+e)/2);
	build(2*n+1,(s+e)/2+1,e);
	tree[n]=tree[2*n]+tree[2*n+1];
}
ll query(int n,int s,int e,int l,int r)
{
	if(s>e || e<l || r<s)
		return 0;
	if(l<=s && e<=r)
		return tree[n];
	return query(2*n,s,(s+e)/2,l,r)+query(2*n+1,(s+e)/2+1,e,l,r);
}
int main()	
{      
  fastio();
  input();
  int n,m,i,j,t;
  cin>>n;
  for(i=0;i<n;i++)
  	cin>>a[i];
  build(1,0,n-1);
  cin>>m;
  while(m--)
  {
  	int l,r;
  	cin>>l>>r;
  	cout<<query(1,0,n-1,l,r)<<"\n";
  }
  return 0;
}