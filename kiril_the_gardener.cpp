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
struct node
{
    long long val,x;
}s[101010];
long long dp[101010][2];
int cmp(node a,node b)
{
    if(a.val==b.val)
    {
        return a.x<b.x;
    }
    else 
        return a.val<b.val;
}
int main()
{
	fastio();
	input();
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
            scanf("%lld",&s[i].val);
            s[i].x=i;
    }
    sort(s+1,s+1+n,cmp);
    int num=0;
    for(int i=1;i<=n;i++)
    {
        if(s[i].val!=s[i-1].val)
            num++;
    }
    long long prel=0;
    long long prer=0;
    int tot=1;
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++)
    {
        int j=i+1;
        while(s[j].val==s[i].val&&j<=n) j++;
        j--;
        long long t=abs(s[j].x-s[i].x);
        dp[tot][0]=t+min(abs(s[j].x-prel)+dp[tot-1][0],abs(s[j].x-prer)+dp[tot-1][1]);
        dp[tot][1]=t+min(abs(s[i].x-prel)+dp[tot-1][0],abs(s[i].x-prer)+dp[tot-1][1]);
        tot=tot+1;
        prel=s[i].x,prer=s[j].x;
        i=j;
    }
    printf("%lld",min(dp[num][0],dp[num][1])+n-1);
}