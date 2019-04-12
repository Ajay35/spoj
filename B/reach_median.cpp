#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

  int n,k;
  scanf("%d%d",&n,&k);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  sort(a,a+n);
  int middle=n/2;
  long long no=0;

    for(int i=0;i<n;i++){
        if(i<middle) no+= max(0,a[i]-k);
        else if(i==middle) no+=abs(a[i]-k);
        else if(i > middle) no+=max(0,k-a[i]);
    }
  printf("%lld",no);
  return 0;
}
