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
struct no
{
	int m0,m1,m2;
};

int a[N],lazy[N];
no tree[4*N];

void build(int n,int st,int en)
{
	if(st==en)
	{
		tree[n].m0=1;
		tree[n].m1=0;
		tree[n].m2=0;
		return;
	}
	build(2*n,st,(st+en)/2);
	build(2*n+1,(st+en)/2+1,en);
	tree[n].m0=tree[2*n].m0+tree[2*n+1].m0;
}
void update(int n,int s,int e,int i,int j)
{
	if(lazy[n]%3==1)
	{
		int zero,one,two;
		zero=tree[n].m0;
		one=tree[n].m1;
		two=tree[n].m2;
		tree[n].m0=two;
		tree[n].m1=zero;
		tree[n].m2=one;
		if(s!=e)
		{
			lazy[2*n]+=lazy[2*n]%3;
			lazy[2*n+1]+=lazy[2*n+1]%3;
		}
	}
	else if(lazy[n]%3==2)
	{
		int zero,one,two;
		zero=tree[n].m0;
		one=tree[n].m1;
		two=tree[n].m2;
		tree[n].m0=two;
		tree[n].m1=zero;
		tree[n].m2=one;
		zero=tree[n].m0;
		one=tree[n].m1;
		two=tree[n].m2;
		tree[n].m0=two;
		tree[n].m1=zero;
		tree[n].m2=one;
		if(s!=e)
		{
			lazy[2*n]+=lazy[2*n]%3;
			lazy[2*n+1]+=lazy[2*n+1]%3;
		}
	}
	else if(lazy[n] && lazy[n]%3 == 0)
    {
        if(s!=e)
        {
            lazy[2*n]+=lazy[n]%3;
            lazy[2*n+1]+=lazy[n]%3;
        }
    }
	lazy[n]=0;
	if(s>e || e<i || j<s)
		return;
	if(i<=s && e<=j)
	{
		int zero,one,two;
		zero=tree[n].m0;
		one=tree[n].m1;
		two=tree[n].m2;
		tree[n].m0=two;
		tree[n].m1=zero;
		tree[n].m2=one;

		if(s!=e)
		{
			lazy[2*n]+=1;
			lazy[2*n+1]+=1;
		}
		return;		
	}
	update(2*n,s,(s+e)/2,i,j);
	update(2*n+1,(s+e)/2+1,e,i,j);
	tree[n].m0=tree[2*n].m0+tree[2*n+1].m0;
	tree[n].m1=tree[2*n].m1+tree[2*n+1].m1;
	tree[n].m2=tree[2*n].m2+tree[2*n+1].m2;
}

no query(int n,int s,int e,int i,int j)
{
	if(lazy[n]%3==1)
	{
		int zero,one,two;
		zero=tree[n].m0;
		one=tree[n].m1;
		two=tree[n].m2;
		tree[n].m0=two;
		tree[n].m1=zero;
		tree[n].m2=one;
		if(s!=e)
		{
			lazy[2*n]+=lazy[n];
			lazy[2*n+1]+=lazy[n];
		}
	}
	else if(lazy[n]%3==2)
	{
		int zero,one,two;
		zero=tree[n].m0;
		one=tree[n].m1;
		two=tree[n].m2;
		tree[n].m0=two;
		tree[n].m1=zero;
		tree[n].m2=one;
		zero=tree[n].m0;
		one=tree[n].m1;
		two=tree[n].m2;
		tree[n].m0=two;
		tree[n].m1=zero;
		tree[n].m2=one;
		if(s!=e)
		{
			lazy[2*n]+=lazy[n];
			lazy[2*n+1]+=lazy[n];
		}
	}
	else if(lazy[n] && lazy[n]%3 == 0)
    {
        if(s!=e)
        {
            lazy[2*n]+=lazy[n];
            lazy[2*n+1]+=lazy[n];
        }
    }
    lazy[n]=0;
	if(j<s || e<i)
		return {0,0,0};
	if(i<=s && e<=j)
		return tree[n];
	int mid=(s+e)/2;
	no le=query(2*n,s,mid,i,j);	
	no ri=query(2*n+1,mid+1,e,i,j);
	no res;
	res.m0=le.m0+ri.m0;
	res.m1=le.m1+ri.m1;
	res.m2=le.m2+ri.m2;
	return res;
}

int main()
{      
  fastio();
  input();
  int n,q,i,j,t;
  cin>>n>>q;
  build(1,0,n-1);
  while(q--)
  {
  	int x,l,r;
  	cin>>x>>l>>r;
  	if(x)
  		cout<<query(1,0,n-1,l,r).m0<<"\n";
  	else
  		update(1,0,n-1,l,r);
  }
  return 0;
}