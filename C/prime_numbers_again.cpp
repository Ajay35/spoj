/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: Indian Institute of Technology Hyderabad 
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
#include <limits.h>
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

bool seive[10005];
vi primatic;
int n;
int dp[100005];



int main()
{
      
  fastio();
  inputread();
  int n,i,j,t;
  memset(seive, true, sizeof(seive)); 
  
  for(int p=2; p*p<=10000; p++) 
  { 
    if (seive[p] == true) 
    { 
      for (int i=p*p; i<=10000; i += p) 
        seive[i] = false;
      primatic.pb(i);
      if(i<6)
      	primatic.pb(pow(i,i));
    } 
  } 
  for (int p=2; p<=10000; p++)
  { 
     if (seive[p])
     { 
        primatic.pb(p);
        if(p<6)
        	primatic.pb(pow(p,p));
     }
  } 

  //sort(primatic.begin(),primatic.end());


	for(i=0;i<=100005;i++)
		dp[i]=inf;
	dp[0]=0;
	for(i=1;i<=100005;i++)
	{
		for(j=0;j<primatic.size();j++)
		{
			if(primatic[j]<=i)
			{
				int subsum=dp[i-primatic[j]];
				if(subsum!=inf && subsum+1<dp[i])
				{
					dp[i]=subsum+1;
				}
			}
		}
	}


  cin>>t;
  while(t--)
  {
  	cin>>n;
  	cout<<dp[n]<<"\n";
  }
  return 0;
}