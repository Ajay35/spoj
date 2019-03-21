#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>
#include <stdlib.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
long long int arr[10005];
long long int dp[10005];
int n;
long long int solve(int i){
	if(i>=n) return 0;
	if(i==n-1)  return arr[i];
    if(dp[i]!=-1) return dp[i];
    return dp[i]=max(arr[i]+solve(i+2),solve(i+1));
}
int main(){	
  int t;
  scanf("%d",&t);
  FOR(j,1,t+1){
	  scanf("%d",&n);
	  REP(i,n)
	    scanf("%lld",&arr[i]);
	 memset(dp,-1,sizeof dp);
	 printf("Case %d: %lld\n",j,solve(0));
}
}