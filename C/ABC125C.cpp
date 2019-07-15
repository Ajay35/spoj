/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: International Institute of Technology Hyderabad 
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <deque>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <ctime>
#include <string.h>
#define LL long long
#define inf 0x7fffffff
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vii vector<ppi>
#define vll vector<LL>
#define mp make_pair
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
LL a[100001],l[100001],r[100001];

LL gcd(LL a,LL b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}

int main(){
      
  fastio();
  inputread();
  LL n,m,i,j,ans=0;
  cin>>n;
  for(i=0;i<n;i++)
  {
  	cin>>a[i];
  }
  cout<<"read"<<endl;
  l[0]=a[0];
  r[n-1]=a[n-1];
  
  for(i=1;i<n;i++)
  	l[i]=gcd(a[i],l[i-1]);

  for(i=n-2;i>=0;i--)
  	r[i]=gcd(a[i],r[i+1]);
  
  for(i=1;i<n-1;i++)
  {
  	ans=max(ans,gcd(l[i-1],r[i+1]));
  }
  ans=max(ans,l[n-2]);
  ans=max(ans,r[1]);
  cout<<ans;
  return 0;
}