/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: International Institute of Technology Hyderabad 
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
int f(int n,int c)
{
	if(n==0)
		return c;
	if(n<0)
		return inf;
	return min(f(n-10,c+1),f(n-12,c+1));
}
int main(){
      
  fastio();
  inputread();
  int n,m,i,j,t;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	int ans=f(n,0);
  	if(ans==inf)
  		cout<<-1<<"\n";
  	else
  		cout<<ans<<"\n";
  }
  return 0;
}