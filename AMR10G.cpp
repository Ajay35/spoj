#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		ll arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		if(k==1){
			cout<<0<<endl;
		}
		else{
			sort(arr,arr+n);
			int m=INT_MAX;

			for(int i=0;i<=n-k;i++){
				int x=arr[i+k-1]-arr[i];
				m=min(m,x);
			}
			cout<<m<<endl;
		}
	}
	return 0;
}