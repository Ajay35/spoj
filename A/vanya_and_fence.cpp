#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int n,h;
  cin>>n>>h;
  int x,width=0;
  for(int i=0;i<n;i++){
    cin>>x;
    if(x>h) width+=2;
    else width++;
  }
  printf("%d",width);
  return 0;
}
