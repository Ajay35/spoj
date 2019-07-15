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


int main()
{      
  fastio();
  input();
  int i,t,j;
  cin>>t;
  while(t--)
  {
  	int num,n,k;
  	cin>>num>>n>>k;
  	int dp[101][101][2];
  	memset(dp,0,sizeof dp);
	dp[1][0][0]=dp[1][0][1]=1;
    for(i=2;i<=n;i++)
    {
        for(j=0;j<=k;j++)
        {
        	dp[i][j][0]=dp[i-1][j][0]+dp[i-1][j][1];
        	if(j>0)
  				dp[i][j][1]=dp[i-1][j-1][1];
        	dp[i][j][1]+=dp[i-1][j][0];
        }
    }
    LL ans=dp[n][k][0]+dp[n][k][1];
    cout<<num<<" "<<ans<<endl;
  }
  return 0;
}