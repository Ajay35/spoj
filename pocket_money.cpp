/**
*	  Name: Ajay
*	  Institute: IIITH 
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <deque>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <ctime>
#include <string.h>
#define ll long long
#define inf 0x7fffffff
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<ppi>
#define vll vector<ll>
#define mp make_pair
#define fi first
#define se second
using namespace std;

void fastio()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}
void input()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

string s;
int n;
ll dp1[101][101],dp2[101][101];
ll f1(int i,int j)
{
	if(i==j)
		return s[i]-'0';
	if(dp1[i][j]!=-1)
		return dp1[i][j];
	ll& ans=dp1[i][j];
	ans=0;
	for(int k=i;k<=j;k++)
	{
		if(s[k]=='+')
			ans=max(ans,(f1(i,k-1)+f1(k+1,j)));
		else if(s[k]=='*')
			ans=max(ans,(f1(i,k-1)*f1(k+1,j)));
	}
	return ans;
}

ll f2(int i,int j)
{
	if(i==j)
		return s[i]-'0';
	if(dp2[i][j]!=-1)
		return dp2[i][j];
	ll& ans=dp2[i][j];
	ans=inf;
	for(int k=i;k<=j;k++)
	{
		if(s[k]=='+')
			ans=min(ans,(f2(i,k-1)+f2(k+1,j)));
		else if(s[k]=='*')
			ans=min(ans,(f2(i,k-1)*f2(k+1,j)));
	}
	return ans;
}
int main()
{      
  fastio();
  input();
  int i,j,t;
  cin>>t;
  while(t--)
  {
  	cin>>s;
  	n=s.size();
  	memset(dp1,-1,sizeof dp1);
  	memset(dp2,-1,sizeof dp2);
  	cout<<f1(0,n-1)<<" "<<f2(0,n-1)<<"\n";
  }
  return 0;
}