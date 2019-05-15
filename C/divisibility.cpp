
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>

using namespace std;


int n,k;
int a[10001];
int dp[10007][100];


bool solve(int i,int r)
{
	if(i==n && r==0) return 1;
	if(i==n) return 0;
	if( dp[i][r] != -1 ) return dp[i][r];
	dp[i][r]=solve(i+1,(r+a[i])%k);
	return dp[i][r] |= solve(i+1,(r-a[i])%k);
}


int main()
{
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int t,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(i=0;i<n;i++)
			cin>>a[i];
		memset(dp,-1,sizeof dp);
		if(solve(0,0)) cout<<"Divisible"<<"\n";
		else cout<<"Not divisible"<<"\n";
	}
	return 0;
}
	