/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: Indian Institute of Technology Hyderabad 
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
using namespace std;

void fastio()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}
void inputread()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}
LL a[100001];
int main()
{
  
  fastio();
  inputread();
  LL n,m,i,j,t;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	cin>>a[0];
  	for(i=1;i<n;i++)
  	{
  		cin>>a[i];
  		a[i]+=a[i-1];
  	}

  	LL m=inf;
  	bool pos=0;

  	for(i=0;i<n;i++)
  	{
  		LL lsum=0,rsum=0,temp=-1;
  		lsum=a[i];
  		rsum=a[n-1]-a[i];
  		if(lsum<rsum)
  		{
  			temp=abs(lsum-rsum);
  			temp<m?m=temp:m;
  		}	
  		if(lsum<=rsum)
  			pos=1;
  	}
  	if(m!=inf)
  		cout<<m<<"\n";
  	else if(m==inf && pos)
  		cout<<0<<"\n";
  	else
  		cout<<-1<<"\n";
  }
  return 0;
}