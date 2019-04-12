#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[]) {
  string str;
  cin>>str;
  int cur=1;
  int count=0;
  for(int i=0;i<str.size();i++){
    int to=str[i]-96;
    int dis=INT_MAX;
    if(cur>to) dis=min((cur-to),(26-cur)+to);
    else if(cur<to) dis=min((to-cur),(cur+(26-to)));
    else dis=0;
    count+=dis;
    cur=to;
  }
  printf("%d",count);
  return 0;
}
