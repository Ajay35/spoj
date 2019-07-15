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

int a[300001];
int main(){
      
  fastio();
  inputread();
  int n,m,i,j;
  cin>>n>>m;
  cin>>i>>j;
  int pva=i,pvb=j;
  bool res=0;
  for(i=2;i<=m;i++)
  {
  	int x,y;
  	cin>>x>>y;
  	if(x!=pva && x!=pvb && y!=pva && y!=pvb)
  	{
  		res=1;
  	}
  	else
  	{
  		pva=x;
  		pvb=y;
  	}
  }
  

  if(!res)
  	cout<<"YES"<<endl;
  else
  	cout<<"NO"<<endl;
  return 0;
}