/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: Indian Institute of Technology Hyderabad 
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
int a[100001],b[100001],ac[100001],bc[100001];
int dp[100001][2];
int n;
int solve(int i,int track)
{
	if(i==n-1)
	{
		if(track==0)
			return a[i];
		return b[i];
	}
	if(dp[i][track]!=-1)
		return dp[i][track];

	if(track==0)
		return dp[i][track]=min(a[i]+solve(i+1,0),ac[i]+a[i]+solve(i+1,1));
	return dp[i][track]=min(b[i]+solve(i+1,1),bc[i]+b[i]+solve(i+1,0));
}
int main()
{      
  fastio();
  inputread();
  int i,j,t;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	for(i=0;i<n;i++)
  		cin>>a[i];
  	for(i=0;i<n;i++)
  		cin>>b[i];
  	for(i=0;i<n-1;i++)
  		cin>>ac[i];
  	for(i=0;i<n-1;i++)
  		cin>>bc[i];
  	// f(index,track)
  	memset(dp,-1,sizeof dp);
  	cout<<min(solve(0,0),solve(0,1))<<endl;
  }
  return 0;
}