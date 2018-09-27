#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,count=0;
	cin>>n;
	unordered_map<int,int> pair2;
	pair2.reserve(16000000);
	int A[n],B[n],C[n],D[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i]>>B[i]>>C[i]>>D[i];	
	}
		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			pair2[C[i]+D[j]]++;
		}
	}	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int temp=-(A[i]+B[j]);
			if(pair2.find(temp)!=pair2.end())
				count+=pair2[temp];
		}			
	}
	cout<<count<<endl;
	return 0;
}
