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

int t[4*1000001],o[4*1000001],c[4*1000001];
string s;

void build(int node,int start,int end)
{
	if(start==end)
	{
		if(s[start]==')')
			c[node]=1;
		else
			o[node]=1;
		return;
	}
	else
	{
		build(2*node,start,(start+end)/2);
		build(2*node+1,(start+end)/2+1,end);
		int matches=min(o[2*node],c[2*node+1]);
		t[node]=t[2*node]+t[2*node+1]+matches;
		o[node]=o[2*node]+o[2*node+1]-matches;
		c[node]=c[2*node]+c[2*node+1]-matches;
	}
}
pair<int,ppi> query(int node,int start,int end,int l,int r)
{
	if(l>r or r<start or end<l)
		return mp(0,mp(0,0));
	if(l<=start && end<=r)
		return mp(t[node],mp(o[node],c[node]));

	pair<int,ppi> no1=query(2*node,start,(start+end)/2,l,r);
	pair<int,ppi> no2=query(2*node+1,(start+end)/2+1,end,l,r);
	pair<int,ppi> result;
	int temp,ans,open,close;
	temp=min(no1.second.first,no2.second.second);
	ans=no1.first+no2.first+temp;
	open=no1.second.first+no2.second.first-temp;
	close=no1.second.second+no2.second.second-temp;

	return mp(ans,mp(open,close));
}
int main()
{
      
  fastio();
  inputread();
  int n,m,i,j,t;
  cin>>s;
  n=s.size();
  build(1,0,n-1);
  cin>>m;
  for(i=1;i<=m;i++)
  {
  	int x,y;
  	cin>>x>>y;
  	cout<<query(1,0,n-1,x-1,y-1).first*2<<"\n";
  }
  return 0;
}