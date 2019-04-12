#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll pow(ll a,ll b,ll c){
  ll res=1;
  while(b){
    if(b&1) res=(res*a)%c;
    a=(a*a)%c;
    b=b>>1;
  }
  return res;
}

int main(int argc, char const *argv[]) {
  ll a,b,c;

  while(cin>>a>>b>>c){
    printf("%lld\n",pow(a,b,c));
  }
  return 0;
}
