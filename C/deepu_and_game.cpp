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
bool g[10001];
int s[10001];
int main(){
      
  fastio();
  inputread();
  int n,m,i,j,t;
  cin>>t;
  while(t--)
  {
	  cin>>n>>m;
	  for(i=0;i<m;i++)
	  	cin>>s[i];
	  
	  memset(g,false,sizeof g);
	  for(i=0;i<=n;i++)
	  {
	  	for(j=0;j<m;j++)
	  	{
	  		if(i<s[j])
	  			continue;
	  		else if(g[i-s[j]]==false)
	  		{
	  			g[i]=true;
	  			break;
	  		}
	  	}
	  }
	  if(g[n])
	  	cout<<"Little Deepu\n";
	  else
	  	cout<<"Kate\n";
	}
  return 0;
}