/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: International Institute of Technology Hyderabad 
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
using namespace std;

void fastio()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}
void inputread()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}
LL n,p;
LL dp[10001][11];

LL f(LL i,LL pc)
{
	if(i==n)
		return 1;

	if(dp[i][pc]!=-1)
		return dp[i][pc];

	if(i==0 && pc<p-1)
		return dp[i][pc]=f(i+1,pc)%mod;
	
	if(pc==p-1)
		return dp[i][pc]=f(i+1,0)%mod;

	return dp[i][pc]=(f(i+1,pc+1)+f(i+1,0))%mod;
}

int main(){
      
  fastio();
  inputread();
  int i,j,t;
  cin>>t;
  while(t--)
  {
  	memset(dp,-1,sizeof dp);
  	cin>>n>>p;
  	cout<<f(0,0)<<"\n";
  }
  return 0;
}
