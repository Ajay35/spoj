
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
string s;

LL dp[61][61];
LL f(int i,int j)
{
	if(i>j) return 0;
	if(dp[i][j]!=-1) 
		return dp[i][j];
	LL val=f(i+1,j)+f(i,j-1)-f(i+1,j-1);
	if(s[i]==s[j])
	{
		val+=1+f(i+1,j-1);
	}
	return dp[i][j]=val;
}


int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int t,i;
	cin>>t;
	while(t--)
	{
		cin>>s;
		n=s.size();
		memset(dp,-1,sizeof dp);
		cout<<f(0,n-1)<<"\n";
	}

	return 0;
}
