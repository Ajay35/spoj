#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  long long n;
  cin>>n;
  if(n%2==0) cout<<n/2;
  else{
    long long t=n/2+1;
    printf("-%lld",t);;
  }
  return 0;
}
