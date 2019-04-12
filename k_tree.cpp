#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int n,k,d;

int dp[101][2];

ll solve(ll cur_w,ll state){
    if(dp[cur_w][state]!=-1)  return dp[cur_w][state];
    else if(cur_w>n)  dp[cur_w][state] = 0;
    else if(cur_w==n && state) dp[cur_w][state] = 1;
    else {
        ll ret=0;
        for(ll i=1;i<=k;i++)
            if(cur_w+i<=n)ret+=solve(cur_w+i,state || ((i>=d)?1:0)),ret%=mod;
        dp[cur_w][state]=ret;
    }
    return dp[cur_w][state];

}

int main(int argc, char const *argv[]) {
  memset(dp,-1,sizeof dp);
  scanf("%d%d%d",&n,&k,&d);
  ll sum=0;
  for(ll i=1;i<=k;i++){
      sum+=solve(i,(i>=d)?1:0);
      sum%=mod;
  }
  printf("%lld\n",sum);
  return 0;
}
