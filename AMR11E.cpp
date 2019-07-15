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
vi lucky;
int primes[20]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71};

bool check(int n)
{
	int pf_index = 0,c=0;
  int pf = primes[pf_index];
 	
  while(pf * pf <= n) {
      if(n% pf==0) c++;
      while(n % pf == 0)
          n /= pf;
      pf = primes[++pf_index];
  }
  if(n != 1)
    c++;
  if(c>=3)
  	return 1;
  return 0;
}

int main(){
      
  fastio();
  inputread();
  int n,i,j,k,t;
 	int c=0;
 	

 	for(i=30;i<=3000;i++)
 	{
 		if(check(i))
 			lucky.pb(i);
 	}
 	
 	cin>>t;
  while(t--)
  {
  	cin>>n;
  	cout<<lucky[n-1]<<"\n";
  }
  return 0;
}