
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>

using namespace std;

int n;
int a[105];
int dp[105][105*501];
int solve(int i,int c,int s)
{
	if(i>=n-1) return abs(c-s);
	if(dp[i][c]!=-1) return dp[i][c];
	return dp[i][c]=min(solve(i+1,c+a[i],s-a[i]),solve(i+1,c,s));
}

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int t,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		int sum=0;
		for(i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		memset(dp,-1,sizeof dp);
		
		cout<<solve(0,0,sum)<<endl;
	}
	return 0;
}
