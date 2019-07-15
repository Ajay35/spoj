/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: International Institute of Information Technology Hyderabad 
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
LL n,m;
LL a[1000001];
bool good(LL h)
{
	LL wood=0,i;
	for(i=0;i<n;i++)
	{
		if(a[i]>h)
			wood+=a[i]-h;
	}
	return wood>=m;
}
int main()
{      
  fastio();
  input();
  int i;
  cin>>n>>m;
  
  LL le=0,ri;
  for(i=0;i<n;i++)
  {
  	cin>>a[i];
  	if(ri<a[i])
  		ri=a[i];
  }
  sort(a,a+n);
  int ans=-1;
  while(le<=ri)
  {
  	LL mid=le+(ri-le)/2;
  	if(good(mid))
  	{
  		ans=mid;
  		le=mid+1;
  	}
  	else
  		ri=mid-1;
  }
  cout<<ans;
  return 0;
}