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
  while(true)
  {
	cin>>n;
	if(n==0) 
		break;
	vi a;
	for(i=1;i<=n;i++)
	{
	  int x;
	  cin>>x;
	  a.pb(x);
	}
	sort(a.begin(),a.end());
	int mx=0;
	for(i=1;i<n;i++)
		mx=max(mx,a[i]-a[i-1]);
	mx=max(mx,2*(1422-a[n-1]))	;
	if(mx>200)
		cout<<"IMPOSSIBLE"<<"\n";
	else
		cout<<"POSSIBLE"<<"\n";
  }
  return 0;
} 