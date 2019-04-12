#include <bits/stdc++.h>
using namespace std;

int bfs(int n,int m){
  int push=0;
  int dist[20001];
  memset(dist,-1,sizeof dist);
  dist[n]=0;
  queue<int> que;
  que.push(n);
  while(!que.empty()){
      int t=que.front();
      que.pop();
      if(t==m) return dist[t];
      int a=t*2;
      if(a<=20000 and dist[a]==-1){
        dist[a]=dist[t]+1;
        que.push(a);
      }
      int b=t-1;
      if(b>0 and dist[b]==-1){
        dist[b]=dist[t]+1;
        que.push(b);
      }

  }
  return push;
}

int main(int argc, char const *argv[]) {

  int n,m;
  cin>>n>>m;
  cout<<bfs(n,m)<<endl;
  return 0;
}
