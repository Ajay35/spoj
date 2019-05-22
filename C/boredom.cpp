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
LL a[100005];
LL dp[100005];
int main(){
        
    fastio();
    inputread();
    int n,m,i,j,t;
    cin>>n;
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++)
    {
    	int x;
    	cin>>x;
    	a[x]++;
    }
    dp[0]=0;
    dp[1]=a[1];
    for(i=2;i<=100000;i++)
    {
    	dp[i]=max(dp[i-1],dp[i-2]+i*a[i]);
    }

    cout<<dp[100000];
    return 0;
}



