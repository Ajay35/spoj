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
  freopen("output.txt","w",stdout);
  #endif
}
bool cmp(ppi a,ppi b)
{
  if(a.fi==b.fi)
    return a.se>b.se;
  return a.fi>b.fi;
}
int main()
{    
  fastio();
  input();  
  int t;
  scanf("%d",&t);
  while(t--){
    int count1=0;
    int n,m;
    scanf("%d%d",&n,&m);
    vector<int> values;
    for(int i=0;i<n;i++){
      int temp;
      scanf("%d",&temp);
      values.push_back(temp);
    }
    while(true){
      int maxpos=max_element(values.begin(),values.end())-values.begin();
      //cout<<maxpos<<" "<<m<<endl;
      if(m==maxpos)break;
      int temp1=maxpos;
      while(temp1--){
        values.push_back(values[0]);
        values.erase(values.begin()+0);
      }
      if(m<maxpos){
        m=values.size()-1-maxpos+m;
      }
      else{
        m=(m-maxpos)-1;
      }
      values.erase(values.begin()+0);
      count1++;
    }
    printf("%d\n",(count1+1));
  }
  return 0;
}