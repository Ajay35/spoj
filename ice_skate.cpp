#include <bits/stdc++.h>
using namespace std;

int n;
int points[101][2];
bool vis[101];

void dfs(int i){
  if(vis[i]) return;
  vis[i]=1;
  for(int k=0;k<n;k++){
    if(!vis[k] and ((points[i][0]==points[k][0]) or (points[i][1] == points[k][1]))) dfs(k);
  }
}

int main(int argc, char const *argv[]) {

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>points[i][0]>>points[i][1];
  }

  int count=0;
  memset(vis,0,sizeof vis);
  for(int i=0;i<n;i++){
    if(!vis[i]){
      dfs(i);
      count++;
    }
  }
  cout<<count-1<<endl;
  return 0;
}
