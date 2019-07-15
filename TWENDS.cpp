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
#define LL long long
#define inf 0x7fffffff
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vii vector<ppi>
#define vll vector<LL>
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
#define MX 1005
int dp[MX][MX];
int a[MX];
 
int getdp(int  i ,int  j){
    if( i>j ) return 0;
    if( dp[i][j] != -1 ) return dp[i][j];
     
    int sum1, sum2;
    // i-th is taken 
    if( a[i+1] >= a[j] )     sum1 = a[i] + getdp(i+2,j); //greedy checking of 2 player
    else if( a[i+1] <a[j] )  sum1 = a[i] + getdp(i+1,j-1);
     
    //j-th is taken 
    if( a[i] >= a[j-1] ) sum2 = a[j] + getdp( i+1 , j-1);//greedy checking of 2 player
    else if( a[i] < a[j-1] )  sum2 = a[j] + getdp ( i , j-2 );
     
    dp[i][j] = sum1>sum2?sum1:sum2;
    return dp[i][j];
}
int main(){
	fastio();
	input();
  int i,j,k,n,t;
  t= 0;
  int sum;
  while( 1 ) {
        t++;
        scanf("%d",&n);
        if( n == 0) break;
        sum = 0;
        for( i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum += a[i];
        }
        for(j=0;j<=n;j++){
            for(i=0;i<=j;i++){
                dp[i][j] =  -1;
            }
        }
        for( i=0;i<n;i++){
            dp[i][i] = a[i];
        }
        int p1 = getdp(0,n-1);
        int p2 = sum - p1;
        printf("In game %d, the greedy strategy might lose by as many as %d points.\n", t, p1-p2 );
  }
  return 0;
}