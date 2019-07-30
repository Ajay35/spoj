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
const int N=1001;
ll n;
ll a[N],b[N];
ll dp[N][N];

ll f(ll i,ll p)
{
	if(i==n)
		return 0;
	if(dp[i][p]!=-1)
		return dp[i][p];
	ll& ans=dp[i][p];
	ans=0;
	return ans=max(a[i]+max(b[i],p)-min(b[i],p)+f(i+1,b[i]),b[i]+max(a[i],p)-min(a[i],p)+f(i+1,a[i]));
}
int main()
{      
  fastio();
  input();
  int i,j,t;
  cin>>n;
  for(i=0;i<n;i++)
  	cin>>a[i]>>b[i];
  memset(dp,-1,sizeof dp);
  cout<<max(a[0]+f(1,b[0]),b[0]+f(1,a[0]));
  return 0;
}