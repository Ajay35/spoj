
	#include <bits/stdc++.h>
	#define LL long long
	#define inf std::numeric_limits<int>::max();
	#define neginf std::numeric_limits<int>::min();
	#define mod 1000000007
	#define pb push_back
	#define ppi pair<int,int>

	int a[200],dp[200][3];

	using namespace std;

	int main(){
			
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);

		int n,i,j;
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];

		for(i=0;i<200;i++){
			for(j=0;j<3;j++){
				dp[i][j]=1000;
			}
		}

		dp[0][0]=1;

		if(a[0]==1 || a[0]==3)
			dp[0][1]=0;

		if(a[0]==2 || a[0]==3)
			dp[0][2]=0;

		for(i=1;i<n;i++){
			dp[i][0]=1+min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2]));
			if(a[i]==1 || a[i]==3)
				dp[i][1]=min(dp[i-1][0],dp[i-1][2]);

			if(a[i]==2 || a[i]==3)
				dp[i][2]=min(dp[i-1][0],dp[i-1][1]);

		}
		cout<<min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]));

		return 0;
	}
