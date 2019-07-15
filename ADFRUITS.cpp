/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: International Institute of Information Technology Hyderabad 
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
#define LL long long
#define inf 0x7fffffff
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vii vector<ppi>
#define vll vector<LL>
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

int main(){
      
  fastio();
  input();
  string s1,s2;
  int n,m,i,j,t;
  while(cin>>s1)
  {
  	cin>>s2;
  
  	n=s1.size();
  	m=s2.size();
  	int dp[n+1][m+1];

  	for(i=0;i<=n;i++)
  	{
  	  for(j=0;j<=m;j++)
  	  {
  	  	if(i==0)
  	  		dp[i][j]=j;
  	  	else if(j==0)
  	  		dp[i][j]=i;
  	  	else if(s1[i-1]==s2[j-1])
  	  		dp[i][j]=1+dp[i-1][j-1];
  	  	else 
  	  		dp[i][j]=1+min(dp[i-1][j],dp[i][j-1]);
  	  }
  	}
  	int ind=dp[n][m];
  	string ans;
  	i=n;
  	j=m;
  	while(i>0 and j>0)
  	{
  		if(s1[i-1]==s2[j-1])
  		{
  			ans.pb(s1[i-1]);
  			i--;
  			j--;
  			ind--;
  		}
  		else if(dp[i-1][j]>dp[i][j-1])
  		{
  			ans.pb(s2[j-1]);
  			j--;
  		}
  		else
  		{
  			ans.pb(s1[i-1]);
  			i--;
  		}
  	}
  	while(i>0)
  	{
  		ans.pb(s1[i-1]);
  		i--;
  	}
  	while(j>0)
  	{
  		ans.pb(s2[j-1]);
  		j--;
  	}
  	reverse(ans.begin(),ans.end());
  	cout<<ans<<"\n";
  }
  return 0;
}