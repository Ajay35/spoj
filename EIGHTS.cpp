#include<stdio.h>
int main()
{int t;
    long long n,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ans=192+(n-1)*250;
        printf("%lld\n",ans);
    }
    return 0;
}