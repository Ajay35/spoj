/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: International Institute of Information Technology Hyderabad 
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
LL dp[13][100];

LL f(int n,int k)
{
	if(n==0)
		return 0;
	if(k==0)
		return 1;
	if(dp[n][k]!=-1)
		return dp[n][k];
	dp[n][k]=0;
	for(int i=0;i<n;i++)
	{
		dp[n][k]+=f(n-1,k-i);
	}
	return dp[n][k];
}

int main()
{      
  fastio();
  input();
  int n,k,i,t;
  cin>>t;
  memset(dp,-1,sizeof dp);
 
  while(t--)
  {
  	cin>>n>>k;
  	cout<<f(n,k)<<"\n";
  }
  return 0;
}