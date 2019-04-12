#include <bits/stdc++.h>
using namespace std;

int n,a[101],dp[101];


int main(int argc, char const *argv[]) {

  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  if(a[i]==1 or a[i]==2 or dp[0]==3){
    ch=a[i];
    dp[0]=1;
  }
  else if(a[i]==0){
    ch=0;
    dp[0]=0;
  }
  for(int i=1;i<n;i++){
    if(a[i]==1 and ch!=1){
      ch=1;
      dp[i]=dp[i-1]+1;
    }
    else if(a[i]==2 and ch!=2){
      ch=2;
      dp[i]=dp[i-1]+1;
    }
    else if(a[i]==3 and (ch==2 or ch==1)){
      ch=3;
      dp[i]=dp[i-1]+1;
    }
    else if((a[i]==1 or a[i]==2) and ch==3){
      if(a[i]==1){
        ch=1;
        dp[i]=dp[i-1]+1;
      }
      else{
        ch=2;
        dp[i]=dp[i-1]+1;
      }
    }
  }
  cout<<n-dp[i]<<"\n";
  return 0;
}
