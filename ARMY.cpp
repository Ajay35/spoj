#include<bits/stdc++.h>
using namespace std;

int  main(int argc, char const *argv[]) {
  int t,ng,nm;
  cin>>t;
  while(t--){
    cin>>ng>>nm;
  int arr1[ng],arr2[nm];

  for(int i=0;i<ng;i++){
    cin>>arr1[i];
  }

  for(int i=0;i<nm;i++){
    cin>>arr2[i];
  }
  int i=0,j=0;

  sort(arr1,arr1+ng);
  sort(arr2,arr2+nm);

  while(i<ng and j<nm){
    if(arr1[i]>arr2[j]) j++;
    else if(arr1[i]<arr2[j]) i++;
    else if(arr1[i]==arr2[j]) j++;
  }
  if(i>=ng) cout<<"MechaGodzilla"<<endl;
  else cout<<"Godzilla"<<endl;
}
  return 0;
}
