#include <bits/stdc++.h>
using namespace std;
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int n, s, d, a, b;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d", &s, &d);
		a = (s+d);
		b = (s-d);
		if(a < 0 || b < 0 || a%2 == 1 || b%2 == 1)
			puts("impossible");
		else
			printf("%d %d\n", a/2, b/2);
	}
    return 0;
}