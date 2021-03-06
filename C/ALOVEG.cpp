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

int a[1000001];

int main(){
      
  fastio();
  inputread();
  int n,m,i,j,t;
  string s;
  cin>>t;
  while(t--)
  {
  	cin>>s;
  	n=s.size();
  	int org_a_count=0;
  	for(i=0;i<n;i++)
  	{
  		if(s[i]=='A')
  		{
  			org_a_count++;
  			a[i]=-1;
  		}
  		else
  			a[i]=1;
  	}
  	int max_end=0,mx=0;
  	for(i=0;i<n;i++)
  	{
  		max_end=max_end+a[i];
  		if(mx<max_end)
  			mx=max_end;
  		if(max_end<0)
  			max_end=0;
  	}
  	if(mx==0)
  		mx=-1;
  	cout<<org_a_count+mx<<"\n";
  }
  return 0;
}