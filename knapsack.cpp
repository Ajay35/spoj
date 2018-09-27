#include<bits/stdc++.h>
using namespace std;
int compare( const void *aa, const void  *bb)
{
    double *a=(double *)aa;
    double *b=(double *)bb;
    if (a[0]<b[0])
     return -1;
    else if (a[0]==b[0]) 
    return 0;
    else  
     return 1;
}
int main()
{
    int s,n,profit=0;
    cin>>s>>n;
    int arr[n][2];
    double value[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
        value[i][0]=(double)arr[i][1]/arr[i][0];
        value[i][1]=arr[i][0];
    }
    qsort(value,n,sizeof(value[0]),compare);
    for(int i=n-1;i>=0;i--)
    {
      if(s-value[i][1]>0)
      {
        s-=value[i][1];
        profit+=value[i][0]*value[i][1];
      }  
    }
    cout<<profit<<endl;
    return 0;
}
