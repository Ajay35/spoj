/**
*	  Name: Ajay
*	  Institute: IIITH 
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
#define vvi vector<vector<int>>
#define vii vector<ppi>
#define vll vector<LL>
#define mp make_pair
#define fi first
#define se second
using namespace std;

void fastio()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}
void input()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

int main()
{      
  fastio();
  input();
  int n,m,i,j,t;
  cin>>t;
  while(t--)
  {
  	int prime[27]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0};
  	cin>>n;
  	bool found[27];
  	memset(found,false,sizeof found);
  	string s;
  	cin>>s;
  	int prev=-1,ans=0;
  	for(i=0;i<n;i++)
  	{
  		if(prime[s[i]-'A'+1])
  		{
  			if(prev==-1)
  			{
  				int left=i+1;
  				int right=n-(i+1);
  				ans+=(left+right)+1;
  				prev=i;
  				cout<<left+right+1<<" "<<i<<"\n";
  			}
  			else
  			{
  				int left=(i-prev)>1?(i-prev):!(found[s[i]-'A'+1]);
  				int right=n-(i+1);
  				ans+=(left+right);
  				prev=i;
  				cout<<left+right<<" "<<i<<"\n";
  			}
  		}
  		found[s[i]-'A'+1]=1;
  	}
  	cout<<ans<<"\n";
  }
  return 0;
}