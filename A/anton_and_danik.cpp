#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int n,a=0,d=0;
  char c;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>c;
    if(c=='A') a++;
    else d++;
  }
  if(a>d) printf("Anton");
  else if(d>a)printf("Danik");
  else printf("Friendship");
  return 0;
}
