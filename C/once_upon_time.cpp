

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

LL n,k;
LL dp[10001];

LL f(int i,LL a[])
{
	if(i>=n)
		return 0;
	if(i==n-1)
		return max(a[i],0LL);

	if(dp[i]!=-1)
		return dp[i];
	
	return dp[i]=max(f(i+1,a),f(i+k+1,a)+a[i]);
}

int main(){
        
    fastio();
    inputread();
    int i,j,t;
   	
    cin>>t;
    while(t--)
    {
	   	cin>>n>>k;
	   	LL a[n];
    	for(i=0;i<n;i++)
    		cin>>a[i];
    	memset(dp,-1,sizeof(dp));
    	cout<<f(0,a)<<"\n";
    }
    return 0;
}



