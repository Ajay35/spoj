#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  string a;
  scanf("%d",&n);
  cin>>a;
  int c=0;
  for(int i=1;i<n;i++){
    if(a[i]==a[i-1])
      c++;
    //printf("%c %c\n",a[i-1],a[i]);
  }
  printf("%d",c);
  return 0;
}
