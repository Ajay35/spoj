#include<bits/stdc++.h>
using namespace std;
int n,c;
bool checkCowStalls(int arr[],int x)
{
    int temp,cows=1;int prev=arr[0];
    for(int i=1;i<n;i++)
    {   
        if(arr[i]-prev>=x)
        {
            cows++;
            prev=arr[i];
            if(cows==c)
                return true;
        }
    }
    return false;
}
int bin_search(int arr[],int l,int r)
{
    int max=-1;
    while(r>l)
    {
        int mid=(l+r)/2;
        if(checkCowStalls(arr,mid))
        {
            if(max<mid)
            {
                max=mid;
            }
            l=mid+1; 
        }
        else
            r=mid;
    }

    return max;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        std::sort(arr,arr+n);
        int low=arr[0];
        int high=arr[n-1];
        cout<<bin_search(arr,low,high)<<endl;
    }
    return 0;
}