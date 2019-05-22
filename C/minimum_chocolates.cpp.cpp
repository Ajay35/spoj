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
    int n,m,i,j,t;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
      cin>>a[i];

    int dp[n];
    memset(dp,0,sizeof dp);
    
    for(i=0;i<n;i++){
        dp[i]=1;
    }

    for(i=1;i<n;i++){
      if(a[i-1]<a[i])
        dp[i]=dp[i-1]+1;
    }

    for(i=n-2;i>=0;i--){
      if(a[i]>a[i+1] && dp[i]<=dp[i+1])
        dp[i]=dp[i+1]+1;
    }
    LL s=0;
    /*for(i=0;i<n;i++)
      cout<<dp[i]<<" ";
    cout<<"\n";*/
    for(i=0;i<n;i++)
      s+=dp[i];
    cout<<s;
    return 0;
}



