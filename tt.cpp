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

int a[100001];
int main() 
{
	fastio();
	input();
    int n,m,w,i,ans=0;
    cin>>n>>m>>w;
    while(w--)
    {
        int i,j,k;
        cin>>i>>j>>k;
        a[i]+=k;
        if(j+1<n)
            a[j+1]-=k;
    }
    for(i=1;i<n;i++)
        a[i]+=a[i-1];
    for(i=0;i<n;i++)
    	if(a[i]<m)
    		ans++;
    cout<<ans;
    return 0;
}