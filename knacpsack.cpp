#include<bits/stdc++.h>
#define ll long long
ll value=0;
using namespace std;	
int main()
{
	ll t,m,k;
	cin>>t;
	while(t--)
	{
		cin>>k>>m;
		ll wt[m],v[m];
		for(ll i=0;i<m;i++)
			cin>>wt[i]>>v[i];
		
		//tabular bottom up method
	
		ll V[m+1][k+1];
		ll i,w;
		for (i=0;i<=m; i++)
		{
			for (w=0;w<=k;w++)
			{
				if (i==0 || w==0)
					V[i][w] = 0;
				else if (wt[i-1] <= w)
						V[i][w] = max(v[i-1]+V[i-1][w-wt[i-1]], V[i-1][w]);
				else
						V[i][w] = V[i-1][w];
			}
		}
		cout<<"Hey stupid robber, you can get "<<V[m][k]<<"."<<endl;
	}
	return 0;
}
