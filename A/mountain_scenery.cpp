#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int n,k,i,p;
  cin>>n>>k;
  p=2*n+1;
  int a[p];
  for(i=0;i<p;i++)
    cin>>a[i];

  for(i=1;i<p;i+=2){
    if(k>0 and a[i-1]+1<a[i] and a[i]>a[i+1]+1){
      a[i]=a[i]-1;
      k--;
    }
    if(k==0) break;
  }
  for(i=0;i<p;i++){
    printf("%d ",a[i]);
  }
  return 0;
}
