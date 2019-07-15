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
LL a[100001],c[100001];
int main(){
      
  fastio();
  inputread();
  int n,m,i,j,t;
  while(true)
  {
  	cin>>n;
  	if(n==0)
  		break;
  	for(i=0;i<n;i++)
  		cin>>a[i];
  	for(i=0;i<n;i++)
  		cin>>c[i];
  	sort(a,a+n);
  	sort(c,c+n);
  	unsigned LL total=0;
  	for(i=0;i<n;i++)
  		total+=(a[i]*c[n-i-1]);
  	cout<<total<<"\n";
  }
  return 0;
}