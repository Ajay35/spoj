#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int c=0,wt=0;
  sort(a,a+n);
  for(int i=0;i<n;i++){
    if(a[i]>=wt){
      c++;
      wt+=a[i];
    }
  }
  printf("%d\n",c);
  return 0;
}
