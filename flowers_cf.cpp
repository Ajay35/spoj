#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int N = 100000;
const int MOD = 1e9 + 7;
int tc, k, dp[N + 1], sum[N + 1];

int main() {
	scanf("%d%d", &tc, &k);

	dp[0] = 1;
	for (int i = 1; i <= N; i++) {
		dp[i] = dp[i - 1]; // i-th char R
		if (i >= k) dp[i] = (dp[i] + dp[i - k])%MOD; // last k chars W
	}

	for (int i = 1; i <= N; i++)
		sum[i] = (sum[i - 1] + dp[i]) % MOD;

	int a, b;
	while (tc--) {
		scanf("%d%d", &a, &b);
		printf("%d\n", (sum[b] - sum[a - 1] + MOD) % MOD);
	}
	return 0;
}
