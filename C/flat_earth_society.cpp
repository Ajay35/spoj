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


int a[100001];
int dp[1000005];

int main()
{
    
	fastio();
	inputread();
	int t;
	cin>>t;

	while(t--)
	{
		int n,m,l,r,i;
	  int mx=-1;
		cin>>n>>l>>r;
		memset(a,0,sizeof a);
		for(i=0;i<n;i++)
		{
			int x;
			cin>>x;
			mx=max(mx,x);
			a[x]++;
		}

		
		dp[0]=0;
		
		for(i=1;i<=mx;i++)
		{
			dp[i]=max(dp[i-1],dp[max(0,i-min(l,r)-1)]+i*a[i]);
		}
		cout<<dp[mx]<<"\n";
		memset(a,0,sizeof a);
	}

	return 0;
}



