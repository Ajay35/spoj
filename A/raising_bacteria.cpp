#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int n,c=0;
  scanf("%d",&n);
  while(n>0){
    c+=(n&1);
    n=n>>1;
  }
  printf("%d",c);
  return 0;
}
