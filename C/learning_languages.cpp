#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;

vector<int> a[110];

int fa[110],now;

int find(int x)
{
    return x==fa[x]?x:fa[x]=find(fa[x]);
}
void join(int x,int y)
{
    int u=find(x),v=find(y);
    if (u!=v)
    {
        now--;
        fa[u]=v;
    }
}
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
   	freopen("output.txt","w",stdout);
    #endif

    int i,j,k,m,n,x,y,z;
    bool flag=0;
    scanf("%d%d",&n,&m);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&k);
        if (k) flag=1;
        while (k--)
        {
            scanf("%d",&x);
            a[x].push_back(i);
        }
    }
    if (!flag)
    {
        printf("%d\n",n);
        return 0;
    }
    for (i=1;i<=n;i++)
      fa[i]=i;
    now=n;
    for (i=1;i<=m;i++)
      for (j=1;j<a[i].size();j++)
        join(a[i][j-1],a[i][j]);
    printf("%d\n",now-1);
}