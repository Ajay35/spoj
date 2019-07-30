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
#include <bitset>
#include <ctime>
#include <string.h>
#define ll long long
#define inf 0x7fffffff
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<ppi>
#define vll vector<ll>
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
const int SIZE = 100000000;
const int LIMIT = sqrt(SIZE)+1;
 
unsigned prime[SIZE>>5];
 
	void sieve() {
		for(int i=0;i<SIZE>>5;i++) prime[i]=0xffff;
		prime[0]&=~(1<<1);
		for(int i=2;i<=LIMIT;i++) 
			if(prime[i>>5]&(1<<(i&31))) 
				for(int j=2*i;j<SIZE;j+=i)
					prime[j>>5]&=~(1<<(j&31));
 
	}
 
	bool isPrime(int n) {
		return prime[n>>5]&(1<<(n&31));
	}
int main()
{      
  fastio();
  input();
  sieve();
  int n,m,i,j,t;
  for(i=2;i<=100000000;i++)
  {
  	if(isPrime(i))
  		cout<<i<<"\n";
  }
  return 0;
}