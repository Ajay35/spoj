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
int main()
{      
  fastio();
  input();
  int n,m,i,j,t;
  ll f[1001],g[1001],h[1001];
  f[0]=g[0]=h[0]=1;
  f[1]=h[1]=1;
  g[1]=2;
  for(i=2;i<=30;i++)
  {
  	f[i]=f[i-1]+f[i-2]+2*g[i-2]+h[i-2];
  	g[i]=g[i-1]+f[i];
    h[i]=f[i]+h[i-2];
  }
  cin>>n;
  for(i=1;i<=n;i++)
  {
    int x;
  	cin>>x;
  	cout<<i<<" "<<f[x]<<"\n";
  }
  return 0;
}