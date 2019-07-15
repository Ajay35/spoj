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
int a[101];

int main(){
      
  fastio();
  inputread();
  int n,m,i,j,t;
  cin>>n;
  m=-1;
  for(i=0;i<n;i++)
  {
  	cin>>a[i];
  	if(a[i]>m)
  		m=a[i];
	}
	
	int dp[2*m+1]={0};
	dp[0]=1;

	for(i=0;i<n;i++)
	{
		for(j=a[i];j<2*m;j++)
		{
			dp[j]+=dp[j-a[i]];
		}
	}

  int ans=-1;
  for(i=m+1;i<2*m;i++)
  {
  	if(dp[i]==0)
  	{
  		ans=i;
  		break;
  	}
  }
  if(ans!=-1)
  	cout<<ans<<"\n";
  else
  	cout<<"Fake Offer!"<<"\n";

  return 0;
}