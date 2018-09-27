#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,x;
    cin>>n;
    int arr[n],prefix[n];
    for(int i=0;i<n;i++)
    { 
        cin>>arr[i];
    }
    sort(arr,arr+n);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
        prefix[i]=prefix[i-1]+arr[i];
    cin>>q;
    while(q--)
    {
        cin>>x;
        int *p=std::lower_bound(arr,arr+n,x);
        if(p!=arr+n)
        {
            int ind=(int)(p-arr+1);
            cout<<ind<<" "<<prefix[ind-1]<<endl;
        }
        else
        {
            cout<<n<<" "<<prefix[n-1]<<endl;
        }
    }
    return 0;
}
