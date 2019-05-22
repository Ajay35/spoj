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


bool vis[10000005];

int main(){

    fastio();
    inputread();
    int n,r,m,i,j,t,a,b;
    cin>>t;
    while(t--)
    {

    	cin>>n>>r>>m;
    	vi adj[n+1];
    	for(i=0;i<r;i++){
    		cin>>a>>b;
    		adj[a].pb(b);
    		adj[b].pb(a);
    	}

    	memset(vis,false,sizeof vis);
    	int protected_cities=0,required_soldiers=0;
    	for(i=0;i<m;i++)
    	{
    		cin>>a>>b;

    		if(!vis[a])
    		{
    			queue<int> que;
    			que.push(a);
    			required_soldiers++;
    			protected_cities++;
    			vis[a]=1;
    			while(!que.empty() && b>0)
    			{
    				int s=que.size();

    				while(s--)
    				{
	    				int u=que.front();
	    				que.pop();
	    				//cout<<"node:"<<u<<endl;
	    				for(int x=0;x<adj[u].size();x++)
	    				{
	    					if(!vis[adj[u][x]])
	    					{
	    						//cout<<"neighbour:"<<adj[u][x]<<endl;
	    						protected_cities++;
	    						vis[adj[u][x]]=1;
	    						que.push(adj[u][x]);
	    					}
	    				}
	    			}
	    			b--;
    			}
    		}
    	}
    	//cout<<"protected_cities:"<<protected_cities<<endl;
    	//cout<<"required_soldiers:"<<required_soldiers<<endl;
    	if(protected_cities<n || required_soldiers!=m) cout<<"No"<<"\n";
    	else cout<<"Yes"<<"\n";
    }
    return 0;
}
