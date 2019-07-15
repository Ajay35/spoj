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
int f(string s)
{
	cout<<s<<"\n";
	int c=0,i,r=0;
	for(i=0;i<s.size();i++)
	{
		if(s[i]=='.')
		{
			c++;
		}
		else 
		{
			cout<<c<<endl;
			r+=(c-1);
			c=0;
		}
	}
	return c;
}
int main(){
      
  fastio();
  inputread();
  int n,m,i,j,t;
  string s;
  cin>>n>>m;
  cin>>s;

  for(i=0;i<m;i++)
  {
  	int a;
  	char c;
  	cin>>a>>c;
  	s[a-1]=c;
  	cout<<f(s)<<"\n";
  }
  return 0;
}