#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {

  int i,t,n,e=0,o=0,ei=-1,oi=-1;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>t;
    if(t&1){
      o++;
      oi==-1?oi=i+1:oi;
    }
    else{
      e++;
      ei==-1?ei=i+1:ei;
    }
  }
  if(e>o) printf("%d",oi);
  else printf("%d",ei);
  return 0;
}
