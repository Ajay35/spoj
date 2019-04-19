#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[]) {

  int n,i;
  string str;
  cin>>str;
  n=str.size();

  for(i=0;i<n;i++){
    int ch=str[i]-'0';
    if(i==0 and ch==9){
        str[i]=ch+48;
    }
    else if(ch>=5){
      str[i]=(char)(9-ch+48);
    }
  }
  for(i=0;i<n;i++){
    cout<<str[i];
  }
  return 0;
}
