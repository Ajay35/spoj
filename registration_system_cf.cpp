#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

  int n;
  string str;
  cin>>n;
  map<string,int> reg;
  for(int i=0;i<n;i++){
    cin>>str;
    if(reg[str]==0){
        cout<<"OK"<<endl;
        reg[str]=1;
    }
    else{
      int no=reg[str];
      no++;
      reg[str]=no;
      cout<<str<<no<<endl;
    }
  }
  return 0;
}
