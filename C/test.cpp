

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



int main()
{
        
    fastio();
    inputread();
    LL i,j,t;
    
    LL n,m;
  
    cin>>m>>n;
    LL c[m];
    for(i=0;i<m;i++)
      cin>>c[i];

    LL dp[n+1];
    memset(dp,0,sizeof dp);
    dp[0]=1;
    for(i=0;i<m;i++)
    {
      for(j=c[i];j<=n;j++)
      {
        dp[j]+=(dp[j-c[i]]);
        dp[j]=dp[j]%mod;
      }
    }
    cout<<dp[n]%mod<<endl;
    return 0;
}



