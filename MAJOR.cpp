#include <bits/stdc++.h>
using namespace std;

bool ismaj(int arr[],int n,int maj_index){
  int c=0;
  for (size_t i=0;i<n;i++) {
    if(arr[i]==arr[maj_index]) c++;
  }
  if(c>n/2) return 1;
  return 0;
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int t,n;
  cin>>t;
  while (t--) {
    cin>>n;
    int arr[n];
    map<int,int> freq;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    //  freq[arr[i]]++;
    }

    /*int tol= (n/2)+1;
    bool flag=0;
    int no=INT_MIN;
    for(auto i:freq){
      if(i.second>=tol){
        cout<<"YES"<<"\n";
        no=i.first;
        flag=true;
        break;
      }
    }
    if(flag) cout<<no<<"\n";
    else cout<<"NO"<<"\n";*/

    /* Moore's voting */

    int maj_index=0;
    int count=1;
    for(int i=1;i<n;i++){
      if(arr[maj_index]==arr[i]) count++;
      else count--;
      if(count==0){
        maj_index=i;
        count=1;
      }
    }

    bool res=ismaj(arr,n,maj_index);
    if(res){
      cout<<"YES"<<" ";
      cout<<arr[maj_index]<<endl;
    }
    else cout<<"NO"<<endl;

  }
  return 0;
}
