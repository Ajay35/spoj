#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d",&n);
  string a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  int c=0;
  for(int i=1;i<n;i++){
    if(a[i][0]!=a[i-1][1]) continue;
    else c++;
  }
  c++;
  printf("%d",c);
  return 0;
}
