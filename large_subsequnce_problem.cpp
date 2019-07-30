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
string s;
int n;
ll dp[10001][50];
ll f(int i,int p)
{
	if(i==n)
	{
		if(p!=47)
			return 1;
		return 0;
	}
	if(dp[i][p]!=-1)
		return dp[i][p];
	ll& ans=dp[i][p];
	ans=0;
	if(s[i]>p)
		ans+=f(i+1,s[i])%mod;
	ans+=f(i+1,p)%mod;

	return ans%mod;
}
int main()
{      
  fastio();
  input();
  int i,j,t,cs=1;
  
  cin>>t;
  while(t--)
  {
  	cin>>s;
  	n=s.size();
  	memset(dp,-1,sizeof dp);
  	cout<<"Case "<<cs++<<": "<<f(0,47)<<"\n";
  }
  return 0;
}