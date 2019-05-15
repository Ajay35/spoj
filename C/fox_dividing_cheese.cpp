
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int a, b, ans = 0;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	cin >> a >> b;
	for (int n = 2; n <= 5; n++) 
	{
		int cnt = 0;
		while (a % n == 0) a /= n, ++cnt;
		while (b % n == 0) b /= n, --cnt; 
		ans += abs(cnt);
	}
	cout << (a == b ? ans : -1);
	return 0;
}
