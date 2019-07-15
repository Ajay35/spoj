/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: International Institute of Technology Hyderabad 
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



int main()
{
  fastio();
	inputread();
	int i,j,t,n;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		n=s.size();

		int dp[n+1];
		vll occ(256,-1);
		dp[0]=1;
		for(i=1;i<=n;i++)
		{
			dp[i]=(2*dp[i-1])%mod;
			if(occ[s[i-1]]!=-1)
			{
				dp[i]-=dp[occ[s[i-1]]];
				if(dp[i]<0)
				{
					dp[i]=(dp[i]+mod)%mod;
				}
			}
			occ[s[i-1]]=(i-1);
		}
		cout<<dp[n]<<"\n";
	}
	return 0;
}
