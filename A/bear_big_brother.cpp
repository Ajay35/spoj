#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int c=0;
  int a,b;
  cin>>a>>b;
  while(a<=b) {
    a=a*3;
    b=b*2;
    c++;
  }
  printf("%d",c);
  return 0;
}
