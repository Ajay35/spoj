#include <cstdio>
#include <queue>
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
 
using namespace std;
const int MAXN = 1e5+7;
int n,m;
long long num[MAXN];
long long check(long long mid)
{
    priority_queue<long long,vector<long long>,greater<long long> >q;
    for(int i = 1 ; i <= n ; ++i)
    {
        q.push(num[i] + i*mid);
    }
    long long sum = 0;
    for(int i = 1 ; i <= mid ; ++i)
    {
        sum += q.top();
        q.pop();
    }
    return sum;
}
 
 
int main()
{
    scanf("%d%d",&n,&m);
    for(int i = 1 ; i <= n ; ++i)scanf("%I64d",&num[i]);
    long long low = 0,high = n,mid,ans;
    while(low <= high)
    {
        mid = (low + high)>>1;
        if(check(mid) <= m)
        {
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    printf("%I64d %I64d\n",ans,check(ans));
    return 0;
}