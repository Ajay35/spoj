#include <bits/stdc++.h>
#define ll long long
using namespace std;
int arr[500001];
int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
	int x=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		x^=arr[i];
	}

	cout<<x<<endl;
	return 0;
}