#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int k,r;
  scanf("%d%d",&k,&r);
  int i,c=1;

  while(true){
    int temp=k*c;
    if(temp%10==0 or (temp-r)%10==0) break;
    c++;
  }
  printf("%d",c);
  return 0;
}
