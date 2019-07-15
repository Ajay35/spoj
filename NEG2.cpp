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
string conv(int n)
{
	string ans="";
	while(n!=0)
	{
		int r=(n%2);
		if(r<0)
			r+=2;
		n=(n-r)/(-2);
		ans+=r+'0';
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
int main()
{      
  fastio();
  input();
  int n,m,i,j,t;
  cin>>n;
  if(n==0)
  	cout<<0;
  else
  	cout<<conv(n);
  return 0;
}