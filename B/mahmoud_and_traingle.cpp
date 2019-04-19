#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int arr[t];int flag=0;
	for(int i=0;i<t;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+t);
	for(int i=0;i<t-2;i++)
	{
		if(arr[i]+arr[i+1]>arr[i+2])
		{
			cout<<"YES"<<endl;
			flag=1;
			break;
		}
		
	}
	if(flag==0)cout<<"NO"<<endl;
}