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
const int N=5000001;

ll seq[2*N];

void seive()
{
	int i,j;
	seq[0]=0;
	seq[1]=0;
	for(i=2;i*i<=10000000;i++)
	{
		if(seq[i]==0)
		{
			seq[i]=i;
			for(j=2*i;j<=10000000;j+=i)
			{
				if(seq[j]==0)
					seq[j]=i;
			}
		}
	}
	for(j=i;j<=10000000;j++)
		if(seq[j]==0)
			seq[j]=j;
}
int main()
{      
  fastio();
  input();
  int n,m,i,j,t;
  seive();
  seq[0]=0;
  seq[1]=0;

  for(i=2;i<=10000000;i++)
  	seq[i]+=seq[i-1];

  cin>>t;
  while(t--)
  {
  	cin>>n;
  	cout<<seq[n]<<"\n";
  }
  return 0;
}