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
  string s;
  getline(cin,s);
  while(t--)
  {
  	getline(cin,s);
  	vector<char> v;
  	vi a;
  	for(i=0;i<s.size();i++)
  	{
  		if(s[i]!=' ')
  			v.pb(s[i]);
  		else
  		{
  			a.pb(v.size());
  			v.clear();
  		}
  	}
  	if(v.size()>0)
  		a.pb(v.size());
  	int mx=0,cur=a[0],cur_l=1;
  	for(i=1;i<a.size();i++)
  	{
  		if(a[i]==a[i-1])
  		{
  			cur_l+=1;
  			mx=max(mx,cur_l);
  		}
  		else
  		{
  			mx=max(cur_l,mx);
  			cur=a[i];
  			cur_l=1;
  		}
  	}
  	cout<<mx<<endl;
  }
  return 0;
}