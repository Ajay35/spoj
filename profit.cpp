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
int n,k;
int a[100001];
int dp[55][55];
int f(int i,int sum,int days)
{
	if(i>=n)
		return sum-(days*k);
	if(dp[i][days]!=-1)
		return dp[i][days];
	int& ans=dp[i][days];
	ans=0;
	return ans=max(sum-(k*days),max(f(i+1,sum+a[i],days+1),f(i+1,a[i],1)));
}
int main()
{      
  fastio();
  input();
  int i;
  while(cin>>n)
  {
    cin>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    memset(dp,-1,sizeof dp);
    cout<<f(0,0,0)<<"\n";
  }
  return 0;
}