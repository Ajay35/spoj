
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>

using namespace std;

int limit,sum;
vector<int> ans,sol;

int lowbit(int n)
{
	return pow(2,log2(n&-n));
}

void solve(int i,int s)
{
	if(sum==s or i>limit)
	{
		if(s==sum)	ans=sol;
		return;
	}
	sol.pb(i);
	solve(i+1,s+lowbit(i));
	sol.pop_back();
	solve(i+1,s);
}

int main()
{
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int i;
	cin>>sum>>limit;
	
	for(i=limit;i>=1;i--){

		if(sum>= lowbit(i))
		{
			sum=sum-lowbit(i);
			ans.pb(i);
		}
		if(sum==0) break;
	}

	if(sum!=0) cout<<-1<<endl;
	else
	{
		cout<<ans.size()<<"\n";
		for(auto i:ans)
		{
			cout<<i<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
