#include<iostream>
#include<algorithm>
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
void inputread()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
int main()
{
  fastio();
  inputread();
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    long int k;
    cin>>k;
    long ht[n];
    long sum[n];
    for(int i=0;i<n;i++)
      cin>>ht[i];

    if(ht[0]>k)
      sum[0]=0;
    else
      sum[0]=ht[0];
    for(int i=1;i<n;i++)
    {
      if(ht[i]<=k)
        sum[i]=sum[i-1]+ht[i];
      else
        sum[i]=0;
    }
    cout<<*max_element(sum,sum+n)<<endl;
  }
  return 0;
}