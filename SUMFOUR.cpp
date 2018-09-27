#include<bits/stdc++.h>
#define ll long long
using namespace std;
int bin_search_occurences(vector<int> arr,int s)
{
  vector<int>::iterator low,high;
	low=lower_bound(arr.begin(),arr.end(),s);
  if (low==arr.end() || *low !=s)
	 return 0;
  high=upper_bound(low, arr.end(),s);     
  return high-low;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,count=0;
	cin>>n;
	vector<int> pair1,pair2;
	int A[n],B[n],C[n],D[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i]>>B[i]>>C[i]>>D[i];	
	}
		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			pair1.push_back(A[i]+B[j]);
			pair2.push_back(C[i]+D[j]);
		}
	}	
	std::sort(pair2.begin(),pair2.end());

	for(vector<int>::iterator i=pair1.begin();i!=pair1.end();i++)
	{
		int s=(*i)*(-1);
		count+=bin_search_occurences(pair2,s);			
	}
	cout<<count<<endl;
	return 0;
}
