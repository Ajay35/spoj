#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#define ll long long
using namespace std;
const int maxn=100005;
ll sum[maxn];
struct frd
{
	ll x,y;
}fd[maxn];
ll cmp(frd u,frd v)
{
	if(u.x!=v.x)
		return u.x<v.x;
	else
		return u.y>v.y;
}
int main(void)
{
	ll n,d,ans=0,x,y;
	scanf("%I64d%I64d",&n,&d);
	for(ll i=0;i<n;i++)
	{
		scanf("%I64d%I64d",&fd[i].x,&fd[i].y);
	}
	sort(fd,fd+n,cmp);
	for(ll i=0;i<n;i++)
	{
		if(!i)
			sum[i]=fd[i].y;
		else
			sum[i]=sum[i-1]+fd[i].y;
	}
	for(ll i=0;i<n;i++)
	{
		ll cur=0,md=i;
		ll hg=n-1,lw=i,mid;
		while(hg>=lw)
		{
			mid=(hg+lw)/2;
			if(fd[mid].x-fd[i].x>=d)
				hg=mid-1;
			else
			{
				lw=mid+1;
				md=mid;
			}
		}
		cur=sum[md]-sum[i]+fd[i].y;
		ans=max(ans,cur);
	}
	printf("%I64d\n",ans );
}
