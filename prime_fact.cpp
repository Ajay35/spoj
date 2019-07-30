
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
  ll n,i,j;
  while(cin>>n)
  {
  	if(n==0)
  		break;
  	for(i=2;i<=sqrt(n);i++)
  	{
  		int c=0;
  		while(n%i==0)
  		{
  			n=n/i;
  			c++;
  		}
  		if(c)
  			cout<<i<<"^"<<c<<" ";
  	}
  	if(n>2)
  		cout<<n<<"^1";
  	cout<<"\n";
  }
  return 0;
}