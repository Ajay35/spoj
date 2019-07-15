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

int btree[30009];
struct pos
{
	int l,r,p;
	long long int v;
};
pos a[230009];

bool cmp(pos a,pos b)
{
    if(a.v == b.v)
        return a.l > b.l;
    return a.v > b.v;
}

void update_it(int idx, int n)
{
    while(idx <=n)
    {
        btree[idx] += 1;
        idx += idx & (-idx);
    }
}
int read_it(int idx)
{
    int s=0;
    while(idx >0)
    {
       s += btree[idx];
       idx -= idx &(-idx);
    }
    return s;
}

int main()
{
	fastio();
	input();
    fill(btree,btree + 30009, 0);
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i].v);
        a[i].l = 0;
        a[i].p =0;
        a[i].r = i+1;
    }
    int q;
    scanf("%d",&q);
    int ans[q+1];
    for(i=n ;i< n+q; i++)
    {
        scanf("%d%d%lld",&a[i].l,&a[i].r,&a[i].v);
        a[i].p = i-n+1;
    }
    sort(a,a+n+q,cmp);
    for(i=0;i< n+q;i++)
    {
        if(a[i].l==0)
           update_it(a[i].r,n + 9);
       	else
           ans[a[i].p] = read_it(a[i].r)-read_it(a[i].l -1);
    }
	for(i=1;i<=q;i++)
		printf("%d\n",ans[i]);
    return 0;
}