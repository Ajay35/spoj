#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  string str;
  cin>>str;
  int c=0,s=0;

  for(int i=0;i<str.size();i++){
    if((int)str[i]>=65 and (int)str[i]<=90) c++;
    else if((int)str[i]>=97 and (int)str[i]<=122) s++;
  }
  if(s<c){
    for(int i=0;i<str.size();i++){
      printf("%c",toupper(str[i]));
    }
  }
  else{
    for(int i=0;i<str.size();i++){
      printf("%c",tolower(str[i]));
    }
  }
  return 0;
}
