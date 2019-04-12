#include<iostream>
#include<cstdio>
using namespace std;
const int N=505;
int n,m,k;
int dir[4][2]={
    1,0,0,1,-1,0,0,-1
};
int vis[N][N]={
    0
};
char map[N][N];
void dfs(int x,int y)
{
    for(int i=0;i<4;i++)
    {
        int a=x+dir[i][0];
        int b=y+dir[i][1];
        if(0<=a && a<n && 0<=b && b<m && vis[a][b]==0 && map[a][b]=='.')
        {
            vis[a][b]=1;
            dfs(a,b);
        }
    }
    if(k)
    {
        k--;
        map[x][y]='X';
    }
}
int main()
{
    scanf("%d %d %d",&n,&m,&k);
    getchar();
    for(int i=0;i<n;i++)
    {
        cin>>map[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        if(vis[i][j]==0 && map[i][j]=='.')
        {
            vis[i][j]=1;
            dfs(i,j);
        }
    }
    for(int i=0;i<n;i++)
    puts(map[i]);
    return 0;
}
