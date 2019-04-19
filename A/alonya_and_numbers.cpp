#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[]) {
  ll n,m,c=0,i,j;
  cin>>n>>m;

  if(n>m) swap(m, n);
  for(i=1;i<=n;i++)
      c+=(m+i)/5-i/5;

  printf("%lld",c);
  return 0;
}
