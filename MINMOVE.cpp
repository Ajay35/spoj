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
	int t,L,i,j,n;
	char s[200010];
	cin>>t;
	while(t--)
	{
		cin>>(s);
		L=strlen(s);
		memcpy(s+L,s,L);
		i=0;
		j=1;
		n=0;
		while (i<L&&j<L&&n<L)
		{
			if (s[i+n]==s[j+n])
				n++;
			else
			{
				if (s[i+n]<s[j+n])
					j+=n+1;
				else
					i+=n+1;
				if (i==j)
					j=i+1;
				n=0;
			}
		}
		printf("%d\n",(i<j?i:j)+1);
	}
	return 0;
}