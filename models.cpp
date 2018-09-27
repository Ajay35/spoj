#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,n,x;
	cin>>t;
	while(t--)
	{
		int sum=0;
		cin>>n;
		int m[n],w[n];
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>w[i];
		}
		sort(m,m+n,greater<int>());
		sort(w,w+n,greater<int>());
		for(int i=0;i<n;i++)
		{
			sum+=(m[i]*w[i]);
		}
		cout<<sum<<endl;
	}
	return 0;
}
