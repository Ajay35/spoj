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
string a[1001];
int n,m;

int f(int mask,int i,int c)
{
	if(mask==(1<<10)-1)
		return c;
	int ans=inf;
	for(int j=i;j<n;j++)
	{
		ans=min(ans,f(choose(j)));
	}
}
int main()
{      
  fastio();
  input();
  int i,j,t;
  cin>>t;
  while()
  {
  	cin>>n>>m;
  	cout<<f(0,0,0)<<"\n";
  }
  return 0;
}