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
  cin>>t;
  while(t--)
  {
  	bool pos=1;
  	cin>>n;
  	int a[n];
  	for(i=0;i<n;i++)
  		cin>>a[i];
  	
  	for(i=0;i+1<n;i++)
  	{
  		if(a[i]<=a[i+1])
  			a[i+1]-=a[i];
  		else
  		{
  			pos=0;
  			break;
  		}
  	}
  	if(a[n-1]!=0)
  		pos=0;
  	if(pos)
  		cout<<"YES"<<"\n";
  	else
  		cout<<"NO"<<"\n";	
  }
  return 0;
}