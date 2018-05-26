#include <bits/stdc++.h>
using namespace std;
int main() {
   int t,h,w;
   cin>>t;
   while(t--)
   {
      cin>>h>>w;
      int arr[h][w+2]={0};
      arr[0][w+1]=0;
      
      for(int i=0;i<h;++i)
         for(int j=1;j<=w;++j)
				cin>>arr[i][j];      
      for(int i=h-2;i>=0;--i)      
         for(int j=1;j<=w;++j)
            arr[i][j]+=max(arr[i+1][j-1],max(arr[i+1][j],arr[i+1][j+1]));
      int max=arr[0][1];
      for(int i=2;i<=w;++i)
         if(arr[0][i]>max)
            max=arr[0][i];
		cout<<max<<endl;
   }
   return 0;
}