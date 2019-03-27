#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int t,n;
  string str;

  string arr[8]= {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT" ,"HHH"};
  cin>>t;
  while(t--){
      cin>>n;
      cin>>str;
      std::vector<int> v;
      for(int i=0;i<8;i++){
        int c=0;
        for(int j=0;j<=37;j++){
          if(arr[i]==str.substr(j,3)){
            c++;
          }
        }
        v.push_back(c);
      }
      cout<<n<<" ";
      for(int i=0;i<v.size();i++){
        std::cout << v[i] << " ";
      }
      cout<<"\n";
  }
  return 0;
}
