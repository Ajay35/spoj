#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int n,a,b,i,j;
  bool happy=0;
  cin>>n;
  vector<pair<int,int>> pairs;
  for(i=0;i<n;i++){
    cin>>a>>b;
    pairs.push_back({a,b});
  }
  sort(pairs.begin(),pairs.end());
  for(i=0;i+1<n;i++){
      if(pairs[i].first<pairs[i+1].first and pairs[i].second>pairs[i+1].second){
        happy=1;
        break;
      }
  }


  if(happy) printf("Happy Alex");
  else printf("Poor Alex");
  return 0;
}
