
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

string s;
int n;

int dp[1005][1005];

int solve(int i,int j)
{
	if(j-i+1 <2) return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	dp[i][j]=0;
	if(s[i]==s[j]) return dp[i][j]=solve(i+1,j-1);
	return dp[i][j]+=1+min(solve(i+1,j),min(solve(i,j-1),solve(i+1,j-1)));
}

int main(){
		
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

ios::sync_with_stdio(0);
cin.tie(NULL);

	int t,n,i,c=1;
	cin>>t;
	while(t--)
	{
		cin>>s;
		int n=s.size();
		memset(dp,-1,sizeof dp);
		int ans=solve(0,n-1);
		cout<<"Case "<<c++<<": "<<ans<<"\n";
	}
	return 0;
}
