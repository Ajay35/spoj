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
const int N=100001;

int a[N];
vi tree[4*N];
void build(int n,int s,int e)
{
	if(s==e)
	{
		tree[n].pb(a[s]);
		return;
	}
	build(2*n,s,(s+e)/2);
	build(2*n+1,(s+e)/2+1,e);
	merge(tree[2*n].begin(),tree[2*n].end(),tree[2*n+1].begin(),tree[2*n+1].end(),back_inserter<vector<int> >(tree[n]));
}
int query(int n,int b,int e,int i,int j,int v)
{
    if(b>j || e< i) return 0;
    if(b>=i && e<= j) 
    {
        int k = upper_bound(tree[n].begin(),tree[n].end(), v )-tree[n].begin();
        return k;
    }
    int mid=(b+e)/2;
    return query(2*n,b,mid,i,j,v)+query(2*n+1,mid+1,e,i,j,v);
}
int main()
{      
  fastio();
  input();
  int n,q,i,j,k,t;
  cin>>n>>q;
  vi v;
  for(i=0;i<n;i++)
  {
  	cin>>a[i];
  	v.pb(a[i]);
  }
  sort(v.begin(),v.end());
  for(int i=0;i<n;i++) 
    a[i]=lower_bound(v.begin(),v.end(),a[i])-v.begin();
  build(1,0,n-1);
  while(q--)
  {
  		int l,r,x;
       	cin>>l>>r>>x;
       	l--,r--,x--;
        int low=0,high=n-1,mid,ans;
        while(low<=high) 
        {
            mid = low + high >> 1;
            int k = query(1,0,n-1,l,r,mid);   
            if(k >= x) 
            {
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        printf("%d\n",a[ans]);
  }
  return 0;
}