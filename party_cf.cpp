#include <bits/stdc++.h>
using namespace std;

int v[2001];

int dfs(int i){
  if(v[i]==-2) return 0;
  return 1+dfs(v[i]);
}


int main(int argc, char const *argv[]) {

  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>v[i];
    v[i]--;
  }
  int max_len=1;
  for(int i=0;i<n;i++){
    int p=dfs(i);
    if(p>max_len) max_len=p;
  }
  cout<<max_len+1<<"\n";
  return 0;
}
