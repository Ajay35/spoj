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
  int n,i;
  while(cin>>n)
  {
  	if(n==0)
  		break;
  	int a[n];
  	for(i=0;i<n;i++)
  		cin>>a[i];
  	sort(a,a+n);
  	int c=0;
  	for(i=n-1;i>=0;i--)
  	{
  		int j=0,k=i-1;
  		while(j<k)
  		{
  			if(a[j]+a[k]<a[i])
  			{
  				c+=(k-j);
  				j++;
  			}
  			if(a[j]+a[k]>=a[i])
  				k--;
  		}
  	}

	cout<<c<<"\n";
  }
  return 0;
}