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
bool p[10001];
int st[10001];
vi primes;
void seive()
{
	int i,j;
	memset(p,true,sizeof p);
	p[0]=0;
	p[1]=0;
	for(i=2;i*i<=sqrt(100001);i++)
	{
		if(p[i])
		{
			for(j=i*i;j<=10000;j+=i)
				p[j]=0;
		}
	}
	for(i=2;i<=10000;i++)
		if(p[i])
			primes.pb(i);
}
void prime_factor(int n)
{
	int i,j,ret=-1;
	for(i=0;i<primes.size();i++)
	{
		while(n>0 && n%primes[i]==0)
		{

			st[primes[i]]++;
			n=n/primes[i];
		}
	}
	if(n>0)
		st[n]++;
}
int main()
{      
  fastio();
  input();
  int n,m,i,j,t;
  cin>>n;
  seive();
  for(i=n;i>=1;i--)
  {
  	prime_factor(i);
  }
  vector<string> a;
  for(i=10000;i>=2;i--)
  	if(st[i]>0)
  		break;
  for(j=2;j<=i;j++)
  {
  	if(j!=i)
  	{
  		if(p[j] && st[j]>0 )
  			cout<<j<<"^"<<st[j]<<" * ";
  	}
  	else
  	{
  		if(p[j] && st[j]>0 )
  			cout<<j<<"^"<<st[j];	
  	}
  }
  return 0;
}