/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: International Institute of Technology Hyderabad 
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

struct no
{
	int need_left;
	int need_right;
};

char a[30005];
no tree[4*30005];


void build(int node,int start,int end)
{
	if(start==end)
	{
		if(a[start]=='(')
		{
			tree[node].need_right=1;
			tree[node].need_left=0;
		}
		else
		{
			tree[node].need_left=1;
			tree[node].need_right=0;
		}
	}
	else
	{
		int m=(start+end)/2;
		build(2*node,start,m);
		build(2*node+1,m+1,end);
		int new_matches=min(tree[2*node].need_right,tree[2*node+1].need_left);
		tree[node].need_left=tree[2*node].need_left+tree[2*node+1].need_left- new_matches ;
		tree[node].need_right=tree[2*node].need_right+tree[2*node+1].need_right- new_matches ;
	}
}

void update(int node,int start,int end,int ind)
{
	if(start==end)
	{
		if(tree[node].need_left==1)
		{
			tree[node].need_left=0;
			tree[node].need_right=1;	
		}
		else
		{
			tree[node].need_left=1;
			tree[node].need_right=0;	
		}
		return;
	}
	int m=(start+end)/2;
	if(ind<=m)
		update(2*node,start,m,ind);
	else
		update(2*node+1,m+1,end,ind);

	int new_matches=min(tree[2*node].need_right,tree[2*node+1].need_left);
	tree[node].need_left=tree[2*node].need_left+tree[2*node+1].need_left- new_matches ;
	tree[node].need_right=tree[2*node].need_right+tree[2*node+1].need_right- new_matches;
}



int main()
{      
  fastio();
  inputread();
  int n,m,i,j,t;
  for(t=1;t<=10;t++)
  {
  	cout<<"Test "<<t<<":"<<"\n";
	  cin>>n;
	  for(i=0;i<n;i++)
	  	cin>>a[i];

	  build(1,0,n-1);
	  cin>>m;
	  for(i=1;i<=m;i++)
	  {
	  	int x;
	  	cin>>x;
	  	if(x==0)
	  	{
	  		if(tree[1].need_right==0 && tree[1].need_left==0)
	  	  	cout<<"YES"<<"\n";
	  	  else
	  	  	cout<<"NO"<<"\n";
	  	}
	  	else
	  	{
	  		update(1,0,n-1,x-1);
	  	}
	  }
	}
  return 0;
}