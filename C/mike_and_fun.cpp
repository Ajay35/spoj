# include <iostream>
# include <cstdio>
# include <cstdio>
using namespace std;
# define si(x) scanf("%d",&(x))
# define rep(i,n) for(int i=1;i<=(n);i++)
# define MX 505
int gird[MX][MX];
int ans[MX];
int n,m,q;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
   	freopen("output.txt","w",stdout);
    #endif
    si(n);si(m);si(q);
    rep(i,n)
    rep(j,m)
    si(gird[i][j]);
    rep(i,n)
    rep(j,m)
    {
        int cnt=0;
        if(gird[i][j])
        {
            while(gird[i][j])j++,cnt++;
            ans[i]=max(ans[i],cnt);
        }
    }
    rep(qq,q)
    {
        int x,y;
        si(x);si(y);
        gird[x][y]^=1;
        int i=x;
        ans[x]=0;
        rep(j,m)
        {
            int cnt=0;
            if(gird[i][j])
            {
                while(gird[i][j])j++,cnt++;
                ans[i]=max(ans[i],cnt);
            }
        }
        int mx=0;
        rep(i,n)mx=max(ans[i],mx);
        cout<<mx<<endl;
    }
    return 0;
}
