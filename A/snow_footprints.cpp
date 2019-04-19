#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

  int n,i,s,t;

  string str;
  scanf("%d",&n);
  cin>>str;
  i=0,s=-1,t=-1;
  bool left=0,right=0;
  for(i=0;i<n;i++){
    if(str[i]=='L') left=1;
    if(str[i]=='R') right=1;
  }
  if(left && right){
    for(i=0;i<n;i++){
      if(s==-1 && str[i]!='.') s=i+1;
      if(s!=-1 && (str[i-1]!='.' && str[i]!='.' && str[i]!=str[i-1])){
        t=i;
        break;
      }
    }
    printf("%d %d",s,t);
  }
  else if(right && !left){

    for(i=0;i<n;i++){
      if(str[i]!='.' && str[i-1]=='.') s=i;
      if(str[i]=='.' && str[i-1]!='.') t=i;
    }
    printf("%d %d",s+1,t+1);
  }
  else{
    for(i=0;i<n;i++){
      if(str[i]!='.' && str[i-1]=='.') t=i;
      if(str[i]=='.' && str[i-1]!='.') s=i;
    }
    printf("%d %d",s,t);
  }





  return 0;
}
