#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  string str1,str2;
  int left,right;
  cin>>str1>>str2;
  int m=str1.size()-1;
  int n=str2.size();
  if((m+n)%2!=0) printf("Impossible");
  else{
    int t=m;
    int i=0;
    while(str1[i]!='|') {
      i++;
    }
    right=n-i+1;
    left=i-1;
    while(t--){

    }

    if(left==right) printf("\n", );
  }
  return 0;
}
