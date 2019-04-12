#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(ll n){
  ll r=sqrt(n);
  ll l=0;

  while(l<=r){
    ll t=pow(l,2)+pow(r,2);
    if(t==n) return 1;
    else if(t>n) r--;
    else l++;
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int t;
  ll n;
  cin>>t;
  while (t--) {
    cin>>n;
    if(check(n)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}
