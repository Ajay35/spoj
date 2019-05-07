#include<bits/stdc++.h>
using namespace std;
int n,x,a[100005],ans=INT_MAX;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        x=upper_bound(a,a+n,a[i]*2)-a;
        ans=min(ans,i+n-x);
    }
    cout<<ans<<endl;
    return 0;
}