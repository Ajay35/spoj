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
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loope(i,a,b) for(int i=a;i<=b;i++)
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
int n,k;
int a[50];
int dp[50][25][25][50];
int f(int i,int open,int close,int l)
{
	if(i==2*n)
	{
		if(open==close)
			return 1;
		return 0;
	}
	if(close>open)
		return 0;
	if(dp[i][open][close][l]!=-1)
		return dp[i][open][close][l];
	int& ans=dp[i][open][close][l];
	if(a[i]==-1)
		ans=f(i+1,open+1,close,l+1);
	else
		ans=f(i+1,open+1,close,l+1)+f(i+1,open>0?open-1:0,open>0?close:close+1,l+1);
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
  	cin>>n>>k;
  	memset(a,0,sizeof a);
  	memset(dp,-1,sizeof dp);
  	loop(i,0,k)
  	{
  		int x;
  		cin>>x;
  		a[x-1]=-1;
  	}
 	 	cout<<f(1,1,0,1)<<endl;
  	
  }
  return 0;
}