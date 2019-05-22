
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vii vector<ppi>
#define vll vector<LL>
using namespace std;

string s1,s2;

int main()
{
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);

	
	while(getline(cin,s1))
	{
		getline(cin,s2);
		int i,j,n,m;
		n=s1.size();
		m=s2.size();
		int dp[n+1][m+1];
		
		
		for(i=0;i<=n;i++){
			for(j=0;j<=m;j++){
				if(i==0 || j==0)
					dp[i][j]=0;
				else if(s1[i-1]==s2[j-1])
					dp[i][j]=1+dp[i-1][j-1];
				else 
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
			cout<<dp[n][m]<<"\n";
	}

	return 0;
}
