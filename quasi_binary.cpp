#include <bits/stdc++.h>
#define ll long long
#define MAX 1000000
using namespace std;


int main(int argc, char const *argv[]) {
  ll n,i,j,m=10,cur=1;
  scanf("%lld",&n);

  ll dp[MAX+1];
  dp[0]=0;
  dp[1]=1;
  int ind=-1;
  for(i=2;i<=MAX;){
    dp[i]=m;
    ll back_steps=pow(2,cur);
    for(j=0;j<back_steps;j++){
      if(i+j<=MAX) dp[i+j]=dp[i]+dp[j];
      if(dp[i+j]>=n){
        ind=i+j;
      }
    }
    i=i+j;
    m*=10;
    cur++;
    if(ind!=-1) break;
    if(pow(2,cur)>=MAX) break;
  }
  if(dp[ind]>n) ind=ind-1;
  int c=0;
  std::vector<int> v;
  while(n!=0){
    while(dp[ind]<=n) {
      n=n-dp[ind];
      v.push_back(dp[ind]);
      c++;
    }
    ind--;
  }
  sort(v.begin(),v.end());
  printf("%d\n",c);
  for(i=0;i<v.size();i++)
    printf("%d ",v[i]);

  return 0;
}
