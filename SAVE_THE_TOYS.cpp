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
ll a[N],dp[N],n;
ll f(int i)
{
	if(i>=n)
		return 0;
	if(dp[i]!=-1)
		return dp[i];
	ll& ans=dp[i];
	ans=0;
	if(i<n)
		ans=max(ans,a[i]+f(i+2));
	if(i+1<n)
		ans=max(ans,a[i]+a[i+1]+f(i+4));
	if(i+2<n)
		ans=max(ans,a[i]+a[i+1]+a[i+2]+f(i+6));
	return ans;
}
int main()
{      
  fastio();
  input();
  int i,j,t;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	for(i=0;i<n;i++)
  		cin>>a[i];
  	memset(dp,-1,sizeof dp);
  	cout<<f(0)<<"\n";
  }
  return 0;
}