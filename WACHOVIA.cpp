#include<bits/stdc++.h>
#define ll long long
ll value=0;
using namespace std;
ll max(ll a,ll b)
{
	return (a>b)?a:b;
}
ll KS(ll m,ll k,ll weight[],ll value[])
{
	if(m<0 || k==0)
	{
		return 0;
	}
	else if(weight[m]>k)
	{
		return KS(m-1,k,weight,value);
	}
	else
		{
			return max(KS(m-1,k,weight,value),value[m]+KS(m-1,k-weight[m],weight,value));
		}		
} 
int main()
{
	ll t,m,k;
	cin>>t;
	while(t--)
	{
		cin>>k>>m;
		ll bags_weight[m],bags_value[m];
		for(ll i=0;i<m;i++)
			cin>>bags_weight[i]>>bags_value[i];
		cout<<"Hey stupid robber, you can get "<<KS(m-1,k,bags_weight,bags_value)<<"."<<endl;
	}
	return 0;
}
