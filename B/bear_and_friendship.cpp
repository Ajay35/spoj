
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int pre[151000];
ll t[1510000];

int findd(int a){
     return pre[a] == a ? a : (pre[a] = findd(pre[a]));
}
void merge(int u,int v){
    int t1;
    int t2;
    t1=findd(u);
    t2=findd(v);
    if(t1!=t2) pre[t1]=t2;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        pre[i]=i;
    }
    for(int i=1;i<=m;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        merge(x,y);
    }
    for(int i=1;i<=n;i++){
        t[findd(i)]++;
    }
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        if(t[i]!=0&&t[i]!=1){
            sum+=(t[i]*(t[i]-1)/2); 
        }

    }
    if(sum!=m)printf("NO\n");
    else printf("YES\n");
    return 0;
}