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

int main(){
      
  fastio();
  inputread();
  int n,a,x,b,y,i,j,t;
  cin>>n>>a>>x>>b>>y;

  int sa[101]={0};
  int sb[101]={0};
  int time=1;
  i=a;
  bool res=0;
  while(i!=x)
  {
  	sa[i]=time++;
  	i++;
  	if(i==n+1)
  		i=1;
  }
  sa[x]=time;
  time=1;
  j=b;
  while(j!=y)
  {
  	sb[j]=time++;
  	j--;
  	if(j==0)
  		j=n;
  }
  sb[y]=time;
  for(i=1;i<=100;i++)
  {
    //cout<<sa[i]<<" "<<sb[i]<<endl;
    if(sa[i]!=0 && sa[i]==sb[i])
    {
      res=1;
      break;
    }
  }
  if(res)
  	cout<<"YES"<<endl;
  else
  	cout<<"NO"<<endl;
  return 0;
}