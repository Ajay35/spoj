#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

const int N = 1e7+2, M = N;
//=======================
int dp[2][N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i,n,k,j;
	cin >> n;
	dp[1][0] = 1;
	for(int steps = 1; steps < N; steps++){
		dp[1][steps] = (3LL*dp[0][steps-1])%mod;
		dp[0][steps] = (2LL*dp[0][steps-1] + dp[1][steps-1])%mod;
	}
	cout << dp[1][n] << endl;


	return 0;
}
