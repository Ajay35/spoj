#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,q,u,l,h,x,ind;
  cin>>t;
  while(t--)
    {
      cin>>n>>u;
      int arr[n]={0};
      while(u--)
      {
	cin>>l>>h>>x;
	arr[l]+=x;
	if(h!=n-1)
	  arr[h+1]-=x;
      }
      for(int i=1;i<n;i++)
      {
	arr[i]+=arr[i-1];
      }
      cin>>q;
      while(q--)
      {
	cin>>ind;
	cout<<arr[ind]<<endl;
      }
    }
  return 0;
}
