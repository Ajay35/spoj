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
ll get_num(string s)
{
	ll i,num1=0,d=1;
  	for(i=0;i<s.size();i++)
  	{
  		if(s[i]>='0' && s[i]<='9')
  			d=s[i]-'0';
  		else
  		{
  			if(s[i]=='m')
  				num1+=(d*1000);
  			if(s[i]=='c')
  				num1+=(d*100);
  			if(s[i]=='x')
  				num1+=(d*10);
  			if(s[i]=='i')
  				num1+=d;
  			d=1;
  		}
  	}
  	return num1;
} 
string conv(ll n)
{
	int ind=0,i;
	int a[4]={1000,100,10,1};
	int c[4]={'m','c','x','i'};
	int aans[4];
	memset(aans,0,sizeof aans);
	while(n>0)
	{
		if(n>=a[ind])
		{
			int d=n/a[ind];
			n=n-(d*a[ind]);
			aans[ind]=d;
		}
		else
			ind++;
	}
	string ans="";
	for(i=0;i<4;i++)
	{
		if(aans[i]>0)
		{
			if(aans[i]==1)
				ans+=c[i];
			else
				ans+=(aans[i]+'0'),ans+=c[i];
		}
	}
	return ans;
}
int main()
{      
  fastio();
  input();
  int n,m,i,j,t;
  cin>>t;
  while(t--)
  {
  	string s1,s2;
  	cin>>s1>>s2;  	
  	ll num1=get_num(s1);
  	ll num2=get_num(s2);
  	ll sum=num1+num2;
  	cout<<conv(sum)<<"\n";
  }
  return 0;
}