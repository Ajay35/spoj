#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,t,sum=0,ans=0,left=0,current=0;
	cin>>n>>t;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		while(sum>t)
		{
			sum-=arr[left];
			left++;
		}
		ans=max(sum,ans);
	}
	cout<<ans<<endl;
	return 0;
}
