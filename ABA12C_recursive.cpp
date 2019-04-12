#include <bits/stdc++.h>
using namespace std;

int n,k;
int arr[103],dp[103][103];

int solve(int i,int w){
  if(i>n) return INT_MAX;
  if(w>k) return INT_MAX;
  if(i<=n and w==k) return 0;
  if(dp[i][w]!=-1) return dp[i][w];
  return dp[i][w]=min(dp[i][w],arr[i]+solve(i+1,w+i));
}

int main(int argc, char const *argv[]) {
  int t,n,k;
  cin>>t;
  while(t--){
    memset(dp,-1,sizeof dp);
    cin>>n>>k;
    for(int i=0;i<k;i++){
      cin>>arr[i];
    }
    cout<<solve(0,0)<<endl;
  }


  return 0;
}
