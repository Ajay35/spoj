#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void fast() {
	std::ios_base::sync_with_stdio(0);
}

int main() {

	int n, x;
	cin >> n;
	set<int>all;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		all.insert(x);

	}


	if (all.size() < 3)
		cout << "YES";
	else if (all.size() > 3)
		cout << "NO";


	else
	{
		int arr[3];
		arr[0] = *all.begin();
		arr[1] = *(++(all.begin()));
		arr[2] = *(--(all.end()));
		if (arr[1] - arr[0] == arr[2]-arr[1])
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}