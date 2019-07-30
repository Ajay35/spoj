/**
*    Name: Ajay
*    Institute: IIITH 
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
int n , k , ans = 0 , mod = 5000000 ;
ll tree[51][100000+10] ;

void update(int idx,int j ,ll V)
{
    while(idx<=100005)
    {
        tree[j][idx]=(tree[j][idx]+V)%mod;
        idx+=idx&(-idx);
    }
}

ll query(int idx,int j)
{
    ll sum=0;
    while(idx>0)
    {
        sum=(sum+tree[j][idx])%mod;
        idx-=idx&(-idx);
    }
    return sum;
}

int main()
{
    fastio();
    input();
    scanf("%d%d",&n,&k);
    for(int j=1;j<=n;j++)
    {
        int a ;
        scanf("%d",&a);
        a++;
        for(int i=1;i<=k;i++)
        {
            ll p =  i == 1 ? 1 : query(a-1,i-1);
            update(a,i,p);
            if(i==k) ans=(ans+p)%mod;
        }
    }
    cout << ans << endl ;
    return 0;
}