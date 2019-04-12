#include <bits/stdc++.h>
using namespace std;

int n,a[101],dp[101][3];


int main(int argc, char const *argv[]) {

  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      dp[i][j]=1000;
    }
  }
  dp[0][0]=1;

  if(a[0]==1 or a[0]==3) dp[0][1]=0;
  if(a[0]==2 or a[0]==3) dp[0][2]=0;

  for(int i=1;i<n;i++){
    dp[i][0]=1+min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2]));
    if(a[i]==1 or a[i]==3){
      dp[i][1]=min(dp[i-1][2],dp[i-1][0]);
    }
    if(a[i]==2 or a[i]==3){
      dp[i][2]=min(dp[i-1][1],dp[i-1][0]);
    }

  }
  cout<<min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]))<<"\n";
  return 0;
}
