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
#define LL long long
#define inf 0x7fffffff
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vii vector<ppi>
#define vll vector<LL>
#define mp make_pair
using namespace std;

void fastio()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}
void inputread()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

int main(){
        
  fastio();
  inputread();
  string s;
  int n,m,i,j,t;
  cin>>t;
  while(t--)
  {
    cin>>s;
    n=s.size();
    int dp[n];
    
    dp[0]=0;
    dp[1]=0;

    if(s[2]!=s[1] || s[1]!=s[0])
      dp[2]=1;
    else 
      dp[2]=0;
    int m=0;
    for(i=3;i<n;i++)
    {
      if(s[i]!=s[i-1] || s[i-1]!=s[i-2])
        dp[i]=1+dp[i-3];
      else
        dp[i]=dp[i-1];
      if(m<dp[i])
        m=dp[i];
    }
    cout<<n-3*m<<"\n";
  }
  return 0;
}



