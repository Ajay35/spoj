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
int a,b;

int f(int num)
{
	cout<<num<<"\n";
	if(num>=b)
		return 0;
	int ans=0;
	for(int i=0;i<=9;i++)
		ans+=i+f(num*10+i);
	return ans;
}
int main()
{      
  fastio();
  input();
  while(cin>>a>>b)
  {
  	if(a==-1 && b==-1)
  		break;
  	cout<<"ans:"<<f(a)<<"\n";
  }
  return 0;
}