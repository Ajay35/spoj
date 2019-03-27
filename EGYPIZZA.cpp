#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

  int n;
  float a,b;
  char c;
  int arr[3]={0};
  int pizzas=0;
  cin>>n;
  while(n--){
    cin>>a>>c>>b;
    float x=a/b;
    if(x==0.75) arr[0]++;
    else if(x==0.5) arr[1]++;
    else arr[2]++;
  }
  int index=0;
  while(index<=2){
    if(index==0 and arr[index]>0){
      pizzas++;
      arr[0]--;
      arr[2]--;
    }
    else if(index==1 and arr[index]>0){
      pizzas++;
      if(arr[index]>1) arr[index]=arr[index]-2;
      else{
        arr[1]-=1;
        arr[2]-=2;
      }
    }
    else if(index==2 and arr[index]>0){
      pizzas++;
      arr[2]-=4;
    }
    else index++;
  }
  cout<<pizzas+1<<endl;
  return 0;
}
