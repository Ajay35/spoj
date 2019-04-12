#include <bits/stdc++.h>
using namespace std;


int dp[4001];

int solve(int n,int a,int b,int c){
  if(n==0) return 0;
  if(n<0) return INT_MIN;
  if(dp[n]!=-1) return dp[n];
  return dp[n]=max(1+solve(n-a,a,b,c),max(1+solve(n-b,a,b,c),1+solve(n-c,a,b,c)));
}

int main(int argc, char const *argv[]) {
  int n,a,b,c;
  memset(dp,-1,sizeof dp);
  cin>>n>>a>>b>>c;
  cout<<solve(n,a,b,c)<<endl;
  return 0;
}
