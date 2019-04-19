#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int y,w,p,d=6;
  scanf("%d%d",&y,&w);
  if(y>w) swap(y,w);
  int n=6-w+1;
  if(n==6){
    printf("1/1");
    return 0;
  }
  if(n==0){
    printf("0/1");
    return 0;
  }
  if(n==2){
    printf("1/3");
    return 0;
  }
  if(n==3){
    printf("1/2");
    return 0;
  }
  if(n==4){
    printf("2/3");
    return 0;
  }
  printf("%d/%d",n,d);
  return 0;
}
