/**
*	  Name: Ajay
*	  Institute: IIITH
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <deque>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <ctime>
#include <string.h>
#define ll long long
#define inf 0x7fffffff
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<ppi>
#define vll vector<ll>
#define mp make_pair
#define fi first
#define se second
using namespace std;

void fastio()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}
void input()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  #endif
}

#define  MAX 26

int indeg[MAX], outdeg[MAX], a[MAX][MAX], vis[MAX];

void reset(){

  for(int i=0;i<MAX;i++){
    indeg[i] = 0;
    outdeg[i] = 0;
    vis[i] = 0;
  }
}

void dfs(int u){

  vis[u] = 1;
  for(int i=0;i<MAX;i++){
    if(!vis[i] and a[u][i]){
      dfs(i);
    }
  }
}

int main()
{
  fastio();
  input();
  int test;
  cin>>test;

  while(test--){

    reset();
    memset(a,0,sizeof(a));

    int n;
    cin>>n;

    string str[n];
    for(int i=0;i<n;i++){
      cin>>str[i];
      int p = str[i].length();
      char ch1 = str[i][0];
      char ch2 = str[i][p-1];
      a[ch1-'a'][ch2-'a'] = 1;
      a[ch2-'a'][ch1-'a'] = 1;
      indeg[ch1-'a']++;
      outdeg[ch2-'a']++;
    }
    
    dfs(str[n-1][0]-'a');

    int flag=0;

    for(int i=0;i<MAX;i++){
      if(indeg[i] > 0 or outdeg[i] > 0){
        if(vis[i] == 0){
          cout<<"The door cannot be opened.\n";
          flag=1;
          break;
        }
      }
    }

    if(flag) continue;

    int pos,neg,zero,tot;
    pos = neg = zero = tot = 0;

    for(int i=0;i<MAX;i++){
      if(indeg[i] > 0 or outdeg[i] > 0){
        if(indeg[i] - outdeg[i] == 1) pos++;
        if(outdeg[i] - indeg[i] == 1) neg++;
        if(indeg[i] == outdeg[i]) zero++;
        tot++;
      }
    }
    if(pos + neg + zero != tot){
      cout<<"The door cannot be opened.\n";
    }else{
      cout<<"Ordering is possible.\n";
    }
  }

  return 0;
}