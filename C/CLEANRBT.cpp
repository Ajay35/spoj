

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <deque>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <queue>
#include <cmath>
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

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

bool vis[25][25];
char grid[25][25];
int n,m;

void cl(queue<pair<pair<int,int>,int>> &que)
{
   std::queue<pair<pair<int,int>,int>> empty;
   std::swap(que,empty);
}

int bfs(int i,int j,int d)
{
	int mv=0,ans=0;
	queue<pair<pair<int,int>,int>> que;
	que.push(mp(mp(i,j),0));
	memset(vis,false,sizeof vis);
	while(!que.empty() || d>0)
	{
		cout<<"algo"<<endl;
		pair<pair<int,int>,int> p=que.front();
		que.pop();
		bool done=0;
		for(int it=0;it<4;it++){
			int nx=p.first.first+dx[it];
			int ny=p.first.second+dy[it];
			if(nx>=0 && nx<n && ny>=0 && ny<m && !vis[nx][ny] && grid[nx][ny]!='x'){
				if(grid[nx][ny]=='*')
				{
					d--;
					grid[nx][ny]='.';
					ans=(p.second+1);
					mv=0;
					cl(que);
					memset(vis,false,sizeof vis);
					que.push(mp(mp(nx,ny),mv));
					done=1;
					break;
				}
				done=1;
				vis[nx][ny]=1;
				que.push(mp(mp(nx,ny),mv+1));

			}
		}
		if(d>0&&!done) break;
		if(d==0) break;
	}
	if(d==0) return ans;
	return -1;
}

int main(){
        
    fastio();
	inputread();
    int i,j,t,sx,sy,d=0;
    while(true)
    {
    	cin>>n>>m;
    	if(n==0 && m==0)
    		break;
    	cout<<n<<" "<<m<<endl;
    	for(i=0;i<n;i++){
    		for(j=0;j<m;j++){
    			cin>>grid[i][j];
    			if(grid[i][j]=='o')
    			{
    				sx=i;
    				sy=j;
    			}
    			if(grid[i][j]=='*')
    				d++;
    		}
    	}
    	cout<<bfs(sx,sy,d)<<endl;
    }
    return 0;
}



