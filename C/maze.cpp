
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vii vector<ppi>
#define vll vector<LL>
using namespace std;

int n,m,k;
char grid[505][505];
bool vis[505][505];

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

void dfs(int i,int j)
{
	if(i<0 || i>=n || j<0 || j>=m || vis[i][j] || grid[i][j]=='#')
		return;
	vis[i][j]=1;

	for(int x=0;x<4;x++)
		dfs(i+dx[x],j+dy[x]);

	if(k>0 && grid[i][j]=='.')
	{
		grid[i][j]='X';
		k--;
	}

}

int main()
{
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

ios::sync_with_stdio(0);
cin.tie(NULL);

	int i,j,si=-1,sj=-1;

	cin>>n>>m>>k;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++){
			cin>>grid[i][j];
			if(si==-1 && grid[i][j]=='.')
			{
				si=i;
				sj=j;
			}
		}
	memset(vis,false,sizeof vis);
	dfs(si,sj);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<grid[i][j];
		}
		cout<<"\n";
	}

	return 0;
}
