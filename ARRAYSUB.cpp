#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,k;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	cin>>k;
	deque <int> que; 
	std::vector<int> v;	
	

	for(int i=0;i<n;i++){
		if(!que.empty() and que.front()==i-k) que.pop_front();

		while(!que.empty() and arr[que.back()]<arr[i]){
			que.pop_back();
		}
		que.push_back(i);
		if(i>=k-1) v.push_back(arr[que.front()]);
	}

	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";

	cout<<endl;
	return 0;
}
