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
bool cmp(ppi a,ppi b)
{
	return a.se<b.se;
}

int main()
{      
  fastio();
  input();
  int n,m,i,j,t;
  
  while(cin>>n)
  {
  	if(n==0) break;
  	int ans=0,cur=0;
  	for(i=0;i<n;i++)
  	{
  		int x;
  		cin>>x;
  		ans+=();
  		cur+=min(x);  		
  	}
  	
  	int cost=0;
  	
  	cout<<cost<<"\n";
  }
  return 0;
}