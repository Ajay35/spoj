#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int n,a,b;
  scanf("%d",&n);
  vector<pair<int,int>> uni;
  for(int i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    uni.push_back({a,b});
  }
  int c=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i!=j and uni[i].first==uni[j].second) c++;
    }
  }
  printf("%d",c);
  return 0;
}
