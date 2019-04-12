#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int t,x,y;
  for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
      cin>>t;
      if(t==1){x=i;y=j;break;}
    }
  }
  printf("%d",(abs(3-x)+abs(3-y)));
  return 0;
}
