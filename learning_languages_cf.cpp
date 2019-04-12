#include <bits/stdc++.h>
using namespace std;

std::vector<int> lang[101];
std::vector<int> adj[101];
bool vis[101];

void dfs(int i){
  if(vis[i]) return;
  vis[i]=1;
  for(int k=0;k<adj[i].size();k++){
    if(!vis[adj[i][k]]) dfs(adj[i][k]);
  }
}

int main(int argc, char const *argv[]) {
  int n,m,k,a,t;
  cin>>n>>m;
  for(int i=1;i<=n;i++){
    cin>>t;
    while(t--){
      cin>>a;
      lang[i].push_back(a);
    }
  }

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      bool found=0;
      for(int k=0;k<lang[i].size();k++){
        for(int l=0;l<lang[j].size();l++){
          if(lang[i][k]==lang[j][l]){
            adj[i].push_back(j);
            adj[j].push_back(i);
            found=1;
            break;
          }
        }
        if(found) break;
      }
    }
  }
  int c=0;
  memset(vis,0,sizeof vis);
  for(int i=1;i<=n;i++){
    if(vis[i]!=1){
       dfs(i);
       c++;
     }
  }
  int z=0;
  for(int i=1;i<=n;i++){
    if(adj[i].size()==0) z++;
  }
  cout<<max(z,c-1)<<endl;
  return 0;
}
