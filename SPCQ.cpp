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

bool sum_digits(ll n)
{
	ll act=n;
	int sum=0;
	while(n)
	{
		sum+=(n%10);
		n=n/10;
	}
	return act%sum==0;
}
int main() 
{
	fastio();
	input();
	long long t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		while(!sum_digits(n))
			n++;
		cout<<n<<"\n";
	}
	return 0;
}