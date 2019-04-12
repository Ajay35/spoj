#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int i=0,j=n-1;
  int moves=0,s=0,d=0,t=0;
  while(moves<n){
    if(a[i]>a[j]){
       if(t==0)s+=a[i];
       else d+=a[i];
       i++;
    }
    else{
      if(t==0) s+=a[j];
      else d+=a[j];
      j--;
    }
    t==0?t=1:t=0;
    moves++;
  }
  printf("%d %d",s,d);
  return 0;
}
