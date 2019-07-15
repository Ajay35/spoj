#include <bits/stdc++.h>
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
int parent[1234];
bool visited[1234];
int root_node;
int LCA(int u,int v)
{
	memset(visited,false,sizeof(visited));
	int lca;
	while(true)
	{
 		visited[u]=true;
  		if(u==root_node)
   			break;
  		u=parent[u];
 	}
	while(true)
	{
		if(visited[v]==true)
		{
	 		lca=v;
	 		break;
	 	}
		v=parent[v];
	}
return lca;
 
}
int main()
{
	fastio();
	input();
	int t;
	scanf("%d",&t);
	int val=1;
	while(t--)
	{
 
 
		int n;
		scanf("%d",&n);
		memset(parent,-1,sizeof(parent));
		for(int i=1;i<=n;i++)
		{
			int x;
			scanf("%d",&x);
			while(x--)
			{
		   		int node;
		      	scanf("%d",&node);
		       	parent[node]=i;
		    }
		}
		for(int i=1;i<=n;i++)
		{
	   		if(parent[i]==-1)
	   		{
	   			root_node=i;
	   			break;
	  		}
	 	}
		int q;
		scanf("%d",&q);
		printf("Case %d:\n",val);
		for(int i=1;i<=q;i++)
		{
			int u,v;
			scanf("%d%d",&u,&v);
			int ans=LCA(u,v);
			printf("%d\n",ans);
		}
		 
			val++;
	}
}