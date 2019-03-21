#include<stdio.h>
#define ll int
typedef struct tree tree;
struct tree
{
    ll total,left,right,max;
};
tree tre[300006];
ll arr[50001];
ll max(ll x,ll y)
{
    return x>y?x:y;
}
void build(ll node,ll a,ll b)
{
    if(a>b)
        return ;
    if(a==b)//leaf node
    {
        tre[node].total=arr[a];
        tre[node].left=arr[a];
        tre[node].right=arr[a];
        tre[node].max=arr[a];
        return ;
    }
    build(2*node,a,(a+b)/2);
    build(2*node+1,(a+b)/2+1,b);
   
    tre[node].total=tre[2*node].total+tre[2*node+1].total;
    tre[node].left=max(tre[2*node].left, tre[2*node].total+tre[2*node+1].left);
    tre[node].right=max(tre[2*node+1].right, tre[2*node+1].total+tre[2*node].right);
    tre[node].max=max(tre[node].left,max(tre[node].right,max(tre[2*node].max,max(tre[2*node+1].max,tre[2*node].right+tre[2*node+1].left))));
}
tree query(ll node,ll a,ll b,ll i,ll j)
{
    if(a>b || a>j || b<i)
    {
        tree t;
        t.total=0;
        t.left=-750350001;
        t.right=-750350001;
        t.max=-750350001;
        return t;
    }
    if(a>=i && b<=j)
    {
        return tre[node];
    }
    tree q1=query(2*node,a,(a+b)/2,i,j);
    tree q2=query(2*node+1,(a+b)/2+1,b,i,j);
    tree res;
    res.total=q1.total+q2.total;
    res.left=max(q1.left,q1.total+q2.left);
    res.right=max(q2.right,q2.total+q1.right);
   
    res.max=max(res.left,max(res.right,max(q1.max,max(q2.max,q1.right+q2.left))));
    return res;
}
int main()
{
    ll n,m,x,y,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    build(1,1,n);
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d%d",&x,&y);
        tree ans=query(1,1,n,x,y);
        printf("%d\n",ans.max);
    }
    return 0;
}