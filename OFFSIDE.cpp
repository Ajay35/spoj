#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

  int A,D;
  while(true){

    cin>>A>>D;
    if(A==0 and D==0) break;
    int arr1[A];
    int arr2[D];
    for(int i=0;i<A;i++) cin>>arr1[i];
    for(int i=0;i<D;i++) cin>>arr2[i];
    int c=0;
    bool flag=false;
    for(int i=0;i<A;i++){
      int temp=0;
      for(int j=0;j<D;j++){
        if(arr1[i]<arr2[j]) temp++;
      }
      if(temp>=D-1){
         flag=true;
         break;
      }
    }
    if(flag) cout<<"Y"<<endl;
    else cout<<"N"<<endl;;

  }
  return 0;
}
