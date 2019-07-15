/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: International Institute of Information Technology Hyderabad 
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
  int n,i,j,t;
  cin>>t;

  while(t--)
  {
	  cin>>n;
	  int x;
	  LL sum=0;	
	  for(i=1;i<=n;i++)
	  {
	  	cin>>x;
	  	int left=i-1;
	  	int right=n-i;
	  	sum+=(-1*(x*left));
	  	sum+=(x*right);
	  }
	  cout<<abs(sum)<<endl; 
  }
  
  return 0;
}