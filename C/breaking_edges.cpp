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
LL v[200005];
bool vis[200005];
vi adj[200005];
int ans=0;
int total=0;

int dfs(int i)
{
	vis[i]=1;
	int temp=v[i];
	for(int j=0;j<adj[i].size();j++)
	{
		int x=adj[i][j];
		if(!vis[x])
			temp |= dfs(x); 
	}
	if(temp==total)
		ans++;
	return temp;
}
int main(){
      
  fastio();
  inputread();
  int n,m,i,j,t;
  cin>>n;
  for(i=0;i<n;i++)
  {
  	cin>>v[i];
  	total |= v[i];
  }
  for(i=0;i<n-1;i++)
  {
  	int a,b;
  	cin>>a>>b;
  	adj[a-1].pb(b-1);
  	adj[b-1].pb(a-1);
  }
  dfs(0);
  cout<<ans<<"\n";
  return 0;
}