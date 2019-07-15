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
ll dp[45],calls[45];
int main()
{      
  fastio();
  input();
  int n,m,i,j,t;
  cin>>t;
  dp[1]=1;
  dp[2]=1;
  calls[0]=1;
  calls[1]=1;
  for(i=3;i<=40;i++)
  	dp[i]=dp[i-1]+dp[i-2];
  
  for(i=2;i<=40;i++)
  	calls[i]=calls[i-1]+((i-1)>1?1:0)+ calls[i-2] +((i-2)>1?1:0);
  while(t--)
  {
  	cin>>n;
  	cout<<"fib("<<n<<")"<<" = "<<calls[n]<<" calls = "<<dp[n]<<"\n";

  }
  return 0;
}