#include <bits/stdc++.h>
using namespace std;

const int MAX_X = 1e4, MAX_K = 100;
int dp[MAX_X + 1][MAX_K + 1];

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

void precompute()
{
	const int MOD = 1e9 + 7;

	for(int k = 1; k <= MAX_K; k++)
	{
		dp[0][k] = dp[1][k] = 1;

		for(int x = 2; x <= MAX_X; x++)
		{
			if(x <= k)
				dp[x][k] = (2LL*dp[x - 1][k])%MOD;
			else
				dp[x][k] = (2LL*dp[x - 1][k] + MOD - dp[x - k - 1][k])%MOD;
		}
	}
}

int main()
{
	fastio();
	inputread();
	precompute();

	int no_of_test_cases;
	scanf("%d", &no_of_test_cases);

	while(no_of_test_cases--)
	{
		int distance, k;
		scanf("%d %d", &distance, &k);
		printf("%d\n", dp[distance][k]);
	}

return 0;
}