#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  string str1,str2;
  //ifstream in;
  //ofstream out;
  //in.open("input");
  //out.open("output");

  while(cin>>str1>>str2){
    int ans[1000];
    int a[300];
    int b[400];
    memset(ans,0,sizeof(ans));
    memset(a,0,sizeof a);
    memset(b,0,sizeof b);
    int i,j;
    int n=str1.size();
    int m=str2.size();
    //if(m<n) swap(str1,str2);
    for(i=0;i<n;i++){
      a[i]=str1[n-i-1];
    }

    for(i=0;i<m;i++){
      b[i]=str2[m-i-1];
    }
    int carry=0;
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        int prod=(a[i]-'0')*(b[j]-'0')+carry;
        int t=ans[i+j];
        ans[i+j]=(t+prod)%10;
        carry=(prod+t)/10;
      }
      if(carry!=0){
        ans[i+j]+=carry;
        carry=0;
      }
    }

    for(i=999;i>=0;i--){
      if(ans[i]!=0) break;
    }
    for(int j=i;j>=1;j--){
      cout<<ans[j];
    }
    cout<<ans[0]<<endl;
  }
  return 0;
}
