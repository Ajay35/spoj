#include <bits/stdc++.h>
using namespace std;

int dp[1001];
int solve(int n,int m,int a,int b){
  if(n<=0) return 0;
  if(dp[n]!=-1) return dp[n];
  return dp[n]=min(a+solve(n-1,m,a,b),b+solve(n-m,m,a,b));
}

int main(int argc, char const *argv[]) {

  int n,m,a,b;
  memset(dp,-1,sizeof dp);
  cin>>n>>m>>a>>b;
  cout<<solve(n,m,a,b)<<endl;
  return 0;
}
