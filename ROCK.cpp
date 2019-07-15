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
int n;
int a[201];
int p_b[201],p_w[201];
int dp[201][201];
int f(int a,int b)
{
	if((p_b[b]-(a>0?p_b[a-1]:0))>((p_w[b]-(a>0?p_w[a-1]:0))))
		return (b-a+1);
	if(dp[a][b]!=-1)
		return dp[a][b];
	int& ans=dp[a][b];
	ans=0;
	for(int i=a+1;i<=b;i++)
		ans=max(ans,f(a,i-1)+f(i,b));
	
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
  	loop(i,0,n)
  	{
  		char c;
  		cin>>c;
  		a[i]=c-'0';
  	}
  	p_b[0]=a[0]==1?1:0;
  	p_w[0]=a[0]==0?1:0;
  	for(i=1;i<n;i++)
  	{
  		if(a[i])
  		{
  			p_b[i]=p_b[i-1]+1;
  			p_w[i]=p_w[i-1];
  		}
  		else
  		{
  			p_w[i]=p_w[i-1]+1;
  			p_b[i]=p_b[i-1];
  		}
  	}
  	memset(dp,-1,sizeof dp);
  	cout<<f(0,n-1)<<"\n";

  }
  return 0;
}