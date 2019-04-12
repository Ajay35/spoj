#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  string str;
  map<char,int> c;
  cin>>str;
  int cnt=0;
  int n=str.size();
  for(int i=0;i<n;i++){
     c[str[i]]++;
  }

  for(auto i:c){
    cnt++;
  }
  if(cnt%2==0) printf("CHAT WITH HER!");
  else printf("IGNORE HIM!");
  return 0;
}
