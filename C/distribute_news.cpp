
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

int p[500005];
int sz[500005];


int find(int n)
{
    while(p[n]!=n){
		n=p[n];
	}
	return p[n];
}

void join(int u,int v)
{
    if(sz[u]>=sz[v])
    {
    	p[v]=u;
		sz[u]+=sz[v];
    }
    else
    {
    	p[u]=v;
    	sz[v]+=sz[u];
    }
}


int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int n,m,i,j,k,u,v;
	cin>>n>>m;
	for (i=1;i<=n;i++)
	{
      p[i]=i;
      sz[i]=1;
	}
	for(i=1;i<=m;i++)
	{
		cin>>k;
		if(k!=0){
			cin>>u;
			for(j=1;j<=k-1;j++){
				cin>>v;
				int rootu=find(u);
				int rootv=find(v);
				if(rootu!=rootv)
					join(rootu,rootv);
			}
		}
	}

	for(i=1;i<=n;i++)
	{
		cout<<sz[find(i)]<<" ";
	}
	return 0;
}
