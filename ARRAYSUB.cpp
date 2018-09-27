#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	
	int i=0;
	while(i<=n-3)
	{
		cout<<max(max(arr[i],arr[i+1]),arr[i+2])<<" ";
		i++;
	}
	return 0;
}
