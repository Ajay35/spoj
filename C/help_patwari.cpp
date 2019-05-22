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

LL dp[100001];
LL n;

LL f(int s)
{
	if(s==n)
		return 1;
	if(s>n)
		return 0;
	
	LL &ans=dp[s];

	if(ans!=-1)
		return ans;
	ans=0;
	for(int j=1;j<=n;j+=2)
	{
		if(s+j<=n)
			ans=(ans+(f(s+j)%mod)%mod);
	}
	return ans%mod;
}

int main(){
      
  fastio();
  inputread();
  int i,j,t;
  cin>>n;
  LL a=1;
  LL b=1;
  for(LL i=2;i<n;i++)
  {
      a=(a%mod+b%mod)%mod;
      swap(a,b);
  }
  cout<<b%mod;
  return 0;
}