#include<bits/stdc++.h>
using namespace std;
class Graph
{
	int v;
	list<int> *adj;
public:
	Graph(int);
	void addEdge(int,int);
	bool bfs(vector<bool>,vector<int>);
};
Graph::Graph(int V)
{
	v=V;
	adj=new list<int>[V];
}
void Graph::addEdge(int a,int b)
{
	adj[a].push_back(b);
	adj[b].push_back(a);
}
bool Graph::bfs(vector<bool> visited,vector<int> side)
{
	int s=1;
	bool is_bipartite=true;
	queue<int> que;
	//cout<<"number of vertives:"<<v-1<<endl;
	for(int i=1;i<=v-1;i++)
	{
		if(side[i]==-1)
		{
			que.push(i);
			side[i]=0;
			while(!que.empty())
			{
				int v=que.front();
				que.pop();
				for(auto u:adj[v])
				{
					if(side[u]==-1)
					{
						side[u]=side[v]^1;
						que.push(u);
					}
					else
					{
						is_bipartite&=side[u]!=side[v];
					}
				}
			}
		}
	}
	return is_bipartite;	
}
int main()
{
	int t,n,m,a,b,s=1;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		vector<int> side(n+1,-1);
		vector<bool> visited(n+1,false);
		Graph g(n+1);
		for(int i=0;i<m;i++)
		{
			cin>>a>>b;
			g.addEdge(a,b);
		}
		bool is_bipartite=g.bfs(visited,side);
		if(is_bipartite)
		{
			cout<<"Scenario #"<<s++<<":"<<endl;
			cout<<"No suspicious bugs found!"<<endl;
		}
		else
		{
			cout<<"Scenario #"<<s++<<":"<<endl;
                        cout<<"Suspicious bugs found!"<<endl;
		}
	}
	return 0;
}
