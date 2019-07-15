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
LL a[300001];
int main(){
      
  fastio();
  inputread();
  LL n,m,i,j,t;
  cin>>n>>m;
  	
  for(i=0;i<n;i++)
  	cin>>a[i];

  LL dis=std::numeric_limits<LL>::max();;
  LL ind=-1;

  for(i=0;i<n;i++)
  {
  	LL temp=0;
  	for(j=0;j<n;j++)
  	{
      temp+=abs(a[i]-a[j]);
  	}

  	//cout<<i+1<<" "<<temp<<endl;
  	temp=temp-m>=0?temp-m:0;
  	//cout<<temp<<endl;
  	if(temp<dis)
  	{
  		dis=temp;
  		ind=i+1;
  	}
  	if(dis==0)
  	    break;
  }
  cout<<ind<<" "<<dis<<"\n";
  return 0;
}