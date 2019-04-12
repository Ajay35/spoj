#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;



int main()
{
  int c=1,n;
  cin>>n;
  while (n) {

    int a[n][3];
    for(int i=0;i<n;i++){
      for(int j=0;j<3;j++){
        cin>>a[i][j];
      }
    }

    for(int i=0;i<n;i++){
      if(i==0){
        a[i][2]+=a[i][1];
      }
      else if(i==1){
        a[i][0]+=a[i-1][1];
        a[i][1]+=min(a[i][0],min(a[i-1][1],a[i-1][2]));
        a[i][2]+=min(a[i-1][1],min(a[i-1][2],a[i][1]));
      }
      else{
        a[i][0]+=min(a[i-1][0],a[i-1][1] );
        a[i][1]+=min(a[i-1][0],min(a[i-1][1],min(a[i-1][2] ,a[i][0])));
        a[i][2]+=min(a[i-1][1],min(a[i-1][2] , a[i][1]));
      }
    }
    cout<<c++<<". "<<*(a[n-1]+1)<<"\n";
    cin>>n;
  }
  return 0;
}
