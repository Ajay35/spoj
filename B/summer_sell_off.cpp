
#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,l,sum=0,f;

    cin>>n>>f;
    ll a[n];

    for(i=0;i<n;i++){
        cin>>k>>l;
        sum+=min(k,l);
        if(k>=l) a[i]=0;
        else a[i]=min(2*k,l)-min(k,l);
    }

    sort(a,a+n,greater<ll>());

    i=0;
    while(f && i<n){
        if(a[i]>0){
            sum+=a[i];
            f--;
        }
        i++;
    }

    cout<<sum;

    return 0;
}
