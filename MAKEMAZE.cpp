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
char g[21][21];
bool vis[21][21];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int n,m;
bool bfs(int x,int y)
{
	int i,j;
	queue<ppi> que;
	que.push(mp(x,y));
	vis[x][y]=1;
	while(!que.empty())
	{
		ppi cur=que.front();
		que.pop();
		if((cur.fi!=x or cur.se!=y) && ((cur.fi==0 or cur.fi==n-1 or cur.se==0 or cur.se==m-1)))
		{
			//cout<<"retuned:"<<cur.fi<<" "<<cur.se<<"\n";
			return 1;
		}
		for(i=0;i<4;i++)
		{
			int newx=cur.fi+dx[i],newy=cur.se+dy[i];
			if(newx>=0 && newx<n && newy>=0 && newy<m && g[newx][newy]!='#' &&  !vis[newx][newy])
			{
				//cout<<"newx:"<<newx<<" newy:"<<newy<<endl;
				que.push(mp(newx,newy));
				vis[newx][newy]=1;
			}
		}
	}
	return 0;
}
int main()
{      
  fastio();
  input();
  int i,j,t;
  cin>>t;
  while(t--)
  {
  	vii st;
  	cin>>n>>m;
  	for(i=0;i<n;i++)
  	{
  		for(j=0;j<m;j++)
  		{
  			cin>>g[i][j];
  			if(g[i][j]=='.' && ((i==0 or i==n-1) or(j==0 or j==m-1)))
  				st.pb(mp(i,j));
  		}
  	}
  	int c=0;
  	if(st.size()!=2)
  	{
  		cout<<"invalid"<<"\n";
  		continue;
  	}
  	for(i=0;i<st.size();i++)
  	{
  		//cout<<st[i].fi<<" "<<st[i].se<<"\n";
  		memset(vis,false,sizeof vis);
  		if(bfs(st[i].fi,st[i].se))
  		{
  			//cout<<"increase"<<endl;
   			c++;
  		}
  		else
  			break;
  	}
  	if(c==2)
  		cout<<"valid"<<"\n";
  	else
  		cout<<"invalid"<<"\n";
  }
  return 0;
}