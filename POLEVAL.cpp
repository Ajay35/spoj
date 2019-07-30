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
ll power(ll x,ll y)
{
	ll res=1;
	while(y)
	{
		if(y&1)
			res=res*x;
		x=x*x;
		y>>=1;
	}
	return res;
}
int main()
{      
  fastio();
  input();
  int n,m,i,j,k;
  int cs=1;
  while(true)
  {
  	cin>>n;
  	if(n==-1)
  		break;
  	int C[n+1];
  	for(i=0;i<=n;i++)
  		cin>>C[i];
 
  	cin>>k;
  	
  	for(i=1;i<=k;i++)
  	{
  		cout<<"Case "<<cs++<<":"<<"\n";
	  	while(k--)
	  	{
	  		int x;
	  		cin>>x;
	  		ll ans=C[0];
	  		for(j=1;j<=n;j++)
	  			ans=ans*x+C[j];
	  		cout<<ans<<"\n";
	  	}
	}
  }
  return 0;
}