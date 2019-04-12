#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

  int t,n,m,d;
  cin>>t;
  while (t--) {
    cin>>n>>m>>d;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    priority_queue <int, vector<int>> pq(arr.begin(),arr.end());
    bool good=1;
    for(int i=0;i<m;i++){
      if(pq.top()>d){
        int a=pq.top()-d;
        pq.pop();
        pq.push(a);
      }
      else{
        good=0;
        break;
      }
    }
    if(good) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

  }
  return 0;
}
