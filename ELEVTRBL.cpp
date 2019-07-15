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
int bfs(int n,int s,int d,int up,int down)
{
	
	bool vis[n+1];
	memset(vis,false,sizeof vis);
	queue<int> que;
	que.push(s);
	vis[s]=1;
	int press=0;
	while(!que.empty())
	{
		int sz=que.size();
		while(sz--)
		{
			int cur=que.front();
			que.pop();
			if(cur==d)
				return press;
			
			if(cur+up<=n)
			{
				if(cur+up==d)
					return press+1;
				if(!vis[cur+up])
				{
					vis[cur+up]=1;
					que.push(cur+up);
				}
			}
			if(cur-down>=1)
			{
				if(cur-down==d)
					return press+1;
				if(!vis[cur-down])
				{
					vis[cur-down]=1;
					que.push(cur-down);
				}
			}
		}
		press++;
	}
	return -1;
}
int main()
{      
  fastio();
  input();
  int n,s,d,up,down;
  cin>>n>>s>>d>>up>>down;
  int ans=bfs(n,s,d,up,down);
  if(ans==-1)
  	cout<<"use the stairs";
  else
  	cout<<ans;
  return 0;
}