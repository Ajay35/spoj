#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll n,ll k){
  if(k==1) return 1;
  if(k==n and n%2==0) return n;
  if(k==n and n&1) return n-1;
  ll n_ind,two_ind;
  if(n&1){
    two_ind=n/2+2;
    n_ind=two_ind-1;
    if(k==two_ind) return 2;
    if(k==n_ind) return n;
    if(k<n_ind) return n-(n_ind-k)*2;
    else return 2+2*(k-two_ind);
  }
  two_ind=(n/2)+1;
  n_ind=n;
  if(n_ind==k) return n;
  if(two_ind==k) return 2;
  if(k<two_ind){
    n_ind=two_ind-1;
    return (n-1)-(n_ind-k)*2;
  }
  return 2*(k-two_ind+1);
}

int main(int argc, char const *argv[]) {

  ll n,k;
  cin>>n>>k;
  cout<<solve(n,k)<<endl;
  return 0;
}
