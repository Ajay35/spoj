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
  ll n,k,i,j,t;
  cin>>t;
  while(t--)
  {
  	cin>>n>>k;
  	char p='F';
  	ll l=1,r=pow(2,54);
  	while(l<=r)
  	{
  		ll mid=(l+r)/2;
  		if(mid==k)
  		{
  			if(p=='M')
  				cout<<"Male"<<"\n";
  			else
  				cout<<"Female"<<"\n";
  			break;
  		}
  		else if(mid<k)
  		{
  			(p=='M')?p:p='F';
  			l=mid+1;
  		}
  		else
  		{
  			(p=='M')?p='F':p='M';
  			r=mid-1;
  		}
  		
  	}
  }
  return 0;
}