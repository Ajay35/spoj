  #include <bits/stdc++.h>
  using namespace std;

  int main(int argc, char const *argv[]) {

    int n,k1,k2,x,fights=0;
    queue<int> que1;
    queue<int> que2;
    scanf("%d",&n);
    scanf("%d",&k1);
    for(int i=1;i<=k1;i++){
      scanf("%d",&x);
      que1.push(x);
    }
    scanf("%d",&k2);
    for(int i=1;i<=k2;i++){
      scanf("%d",&x);
      que2.push(x);
    }
    //printf("%d %d\n",que1.size(),que2.size());
    map<pair<int,int>,int> vis;
    while(!que1.empty() and !que2.empty()){
      fights++;
      int a=que1.front();
      int b=que2.front();
      //printf("%d %d\n",a,b);
      //if(vis[{a,b}]!=0) break;
      //else vis[{a,b}]=1;
      if(a==b) break;
      else if(a>b){
        que1.push(b);
        que1.push(a);
        que1.pop();
        que2.pop();
      }
      else if(a<b){
        que1.pop();
        que2.pop();
        que2.push(a);
        que2.push(b);
      }
      if(fights>10000) break;
    }
    if(!que1.empty() and !que2.empty()) printf("%d\n",-1);
    else if(!que1.empty() and que2.empty()) printf("%d %d\n",fights,1);
    else if(que1.empty() and !que2.empty()) printf("%d %d\n",fights,2);
    return 0;
  }
