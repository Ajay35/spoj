#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

  int n,k;
  cin>>n>>k;
  int a[n];
  int prefix[n];

  for(int i=0;i<n;i++)
    cin>>a[i];
  prefix[0]=a[0];
  for(int i=1;i<n;i++)
    prefix[i]=prefix[i-1]+a[i];


  int mi=INT_MAX,ms=INT_MAX;
  for(int i=0;i<=n-k;i++){
    int sum=0;
    if(i==0) sum+= (prefix[i+k-1]);
    else sum+= (prefix[i+k-1]-prefix[i-1]);
    if(ms>sum) {ms=sum;mi=i;};
  }
  //cout<<ms<<endl;
  cout<<mi+1<<endl;
  return 0;
}
