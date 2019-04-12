#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

vector<int> v, c;
int dp[2010][2010];
int B(int i, int w)
{
	if (i == 0 || w == 0) return 0;
  if(dp[i][w]!=-1) return dp[i][w];
	if (c[i] > w) return B(i - 1, w);

	return dp[i][w]=max(B(i - 1, w), v[i] + B(i - 1, w - c[i]));
}

int main()
{
	int S, N; cin >> S >> N;

	// sloted in for easy array access; values won't be used.
	c.push_back(-1);
	v.push_back(-1);
  memset(dp,-1,sizeof dp);
	int ct, vt;
	for (int i = 0; i < N; i++) {
		cin >> ct >> vt;
		c.push_back(ct);
		v.push_back(vt);
	}

	cout << B(N, S)<<endl;
}
