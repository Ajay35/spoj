#include <bits/stdc++.h>

#define MAX 1000001

using namespace std;

int main ()
{
	int k, l, m, a[52];
	scanf("%d %d %d", &k, &l, &m);
	for (int i=0; i<m; ++i)
		scanf("%d", &a[i]);
	string ans;
	bool dp[MAX];
	dp[0] = 0;
	dp[1] = 1;
	dp[k] = 1;
	dp[l] = 1;
	for (int i=2; i<k; ++i)
		dp[i] = !dp[i-1];
	for (int i=k+1; i<l; ++i)
		dp[i] = !(dp[i-1] & dp[i-k]);
	for (int i=l+1; i<MAX; ++i)
		dp[i] = !(dp[i-k] & dp[i-1] & dp[i-l]);
	for (int i=0; i<m; ++i)
		if (dp[a[i]]) ans += 'A';
		else ans += 'B';
	cout << ans << endl;
	return 0;
}
