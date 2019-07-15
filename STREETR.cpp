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
pair<int,int> valid(int dis,vi d)
{
	int trees=0;
	for(int i=0;i<d.size();i++)
	{
		if(d[i]%dis!=0)
			return mp(0,0);
		else
			trees+=max(0,(d[i]/dis)-1);
	}
	return mp(1,trees);
}
int main()
{
  fastio();
  input();
  int n,m,i,j,t;
  cin>>n;
  int a[n];
  vi d;
  for(i=0;i<n;i++)
  	cin>>a[i];

  for(i=1;i<n;i++)
  	d.pb(a[i]-a[i-1]);

  sort(d.begin(),d.end());
  int l=1,r=1e8,ans=inf;
  while(l<=r)
  {
  	int cur_dis=(l+r)/2;
  	ppi x=valid(cur_dis,d);
  	if(x.fi)
  	{
  		ans=min(ans,x.se);
  		l=cur_dis+1;
  	}
  	else
  		r=cur_dis-1;
  }
  cout<<ans;
  return 0;
}