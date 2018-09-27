#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    std::sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
       if(std::binary_search(arr+(i+1),arr+n,arr[i]+k))
            count++;
       if(std::binary_search(arr+(i+1),arr+n,abs(arr[i]-k)))
            count++;
    }
    printf("%d\n",count);
    
    return 0;
}