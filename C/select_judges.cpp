
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vii vector<ppi>
#define vll vector<LL>
using namespace std;

int n;
int a[100005];
int dp[100005];
LL f(int i)
{
	if(i==0)
		return a[0];
    else if(i==1) 
        return max(a[0],a[1]);
    if(dp[i]!=-1)
    	return dp[i];   
    return dp[i]=max(f(i-2)+a[i],f(i-1));
}

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int i,t,c=1;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];
		memset(dp,-1,sizeof dp);
		cout<<"Case "<<c++<<": "<<f(n-1)<<"\n";
	}
	return 0;
}
