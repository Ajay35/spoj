#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

  int n;
  cin>>n;
  bool a[1000],b[1000],c[1000];
  int cnt=0;

  for(int i=0;i<n;i++){
    cin>>a[i]>>b[i]>>c[i];
  }

  for(int i=0;i<n;i++){
    int t= (int)(a[i]?1:0)+(int)(b[i]?1:0)+(int)(c[i]?1:0);
    if(t>=2) cnt++;
  }
  printf("%d",cnt);
  return 0;
}
