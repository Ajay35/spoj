#include <bits/stdc++.h>
using namespace std;

string str;
int main(int argc, char const *argv[]) {

  std::vector<int> v;
  cin>>str;
  for(int i=0;i<str.size();i++){
    if(str[i]!='+'){
      v.push_back(str[i]-'0');
    }
  }
    sort(v.begin(),v.end());
    int n=v.size();
    for(int i=0;i<n;i++){
      if(i!=n-1){
        cout<<v[i]<<"+";
      }
      else{
        cout<<v[i];
      }
    }
  return 0;
}
