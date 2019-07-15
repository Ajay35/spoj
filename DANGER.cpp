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
int power(int x,int y)
{
	int res=1;
	while(y)
	{
		if(y&1)
			res=res*x;
		x=x*x;
		y=y>>1;
	}	
	return res;
}
int main()
{
      
  fastio();
  input();
  LL n;
  double temp;  
  while(cin>>temp)
  {
  	n=(LL)temp;
  	if(n==0)
  		break;
  	if(n==1 or !(n &(n-1)))
  		cout<<1<<"\n";
  	else
  	{
	  	int p=1;
	  	
	  	
	  	while(power(2,p)<n)
	  		p++;
	  	p--;
	  	int steps=n-power(2,p);
	  	cout<<3+(steps-1)*2<<"\n";
	}
  }
  
  return 0;
}