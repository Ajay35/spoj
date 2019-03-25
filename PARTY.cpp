//saksham
#include <bits/stdc++.h>
#define ll long long

using namespace std;
vector<ll> cost(103);
vector<ll> fun(103);
vector<vector<ll> > dp(103,vector<ll>(505,-1));
ll func(ll n,ll m)
{
	if(m<0) return -1000000;
	if(n==0) return 0;
	if(dp[n][m]!=-1) return dp[n][m];
	return dp[n][m]=max(func(n-1,m),func(n-1,m-cost[n])+fun[n]);
}
ll N,M;
int main()
{
	cin>>M>>N;
	ll n,m;
	while(M||N)
	{
	n=N;
	m=M;
	for(ll i=1;i<=n;i++)
		cin>>cost[i]>>fun[i];
	
	for(ll i=0;i<=n;i++)
		for(ll j=0;j<=m;j++)
			dp[i][j]=-1;

	ll f=func(N,M);
	ll i,j;


	for( i=0;i<=m;i++){
		if(func(N,i)==f) break;
	}

	cout<<i<<" "<<f<<"\n";


	cin>>M>>N;
	}
    return 0;
}
