
#include <bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
vi enemies[100+5];
bool visited[100+5];
int cnt,length;


void dfs(int x)
{
    int i,k;
    visited[x]=true;
    cnt+=enemies[x].size();
    length++;
    for(i=0; i<enemies[x].size(); i++)
    {
        k=enemies[x][i];
        if(!visited[k]) dfs(k);
    }
}

int main()
{
    int i,a,b,n,m,ans;
    cin>>n>>m;
    ans=0;
    for(i=1; i<=m; i++){
        cin>>a>>b;
        enemies[a].push_back(b);
        enemies[b].push_back(a);
    }
    for(i=1; i<=n; i++){
        if(!visited[i]){
            cnt=length=0;
            dfs(i);
            if(length%2 && length*2==cnt) ans++;
        }
    }
    if((n-ans)%2) ans++;
    cout<<(ans)<<"\n";
    return 0;
}
