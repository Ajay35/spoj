
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;
int main()
{
    
    int n,k,cnt=0,a[100001];
    ll sum=0;
    cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
                cnt++;
        }
        sort(a,a+n);
        if(k>=cnt)
        {
            for(int i=0;i<cnt;i++)
                a[i]*=-1;
            sort(a,a+n);
            for(int i=0;i<(k-cnt);i++)
                a[0]*=-1;
        }
        else {
            for(int i=0;i<k;i++)
                a[i]*=-1;
        }
        for(int i=0;i<n;i++)
            sum+=a[i];
        cout<<sum<<endl;
    return 0;
}