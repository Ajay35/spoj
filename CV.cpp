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
  int n,m,i,j,t;
  int a[26]={1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0};
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	string s;
  	cin>>s;
  	int c=0;
  	for(i=0;i<n;i++)
  	{
  		if(i+1<n)
  		{
  			int ind= s[i]-'a';
  			int ind1=s[i+1]-'a';
  			if(a[ind]==0 && a[ind1]==1)
  			{
  				c++;
  			}
  		}
  	}
  	cout<<c<<endl;
  }
  return 0;
}