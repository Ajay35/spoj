#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int e,sum=0,c=0;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sum=a[0];
  if(sum==-1) c++;
  for(int i=1;i<n;i++){
    if(sum<=0 and a[i]==-1) c++;
    else if(sum>0 and a[i]==-1){
       sum--;
       sum=max(sum,0);
     }
    else if(a[i]>0) sum=max(a[i],sum+a[i]);
  }
  cout<<c<<endl;
  return 0;
}
