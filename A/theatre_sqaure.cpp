#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[]) {
  ll n,m,a;
  cin>>n>>m>>a;
  if(n<a and m<a){
    printf("1");
    return 0;
  }
  while(n%a!=0) n++;
  while(m%a!=0) m++;
  ll area=n*m;
  a=a*a;
  cout<<area/(a)<<endl;
  return 0;
}
