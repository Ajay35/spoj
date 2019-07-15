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

int main()
{      
  fastio();
  input();
  int n,m,i,j,t;
  string s;
  while(true)
  {
  	getline(cin,s);
  	if(s[0]=='*') break;
  	vector<string> result;
	istringstream iss(s);
	for(string s; iss >> s;)
    	result.push_back(s);
  	char c=tolower(s[0]);
  	bool yes=1;
  	for(i=1;i<result.size();i++)
  	{
  		if(tolower(result[i][0])!=c)
  		{
  			yes=0;
  			break;
  		}
  	}
  	if(yes)
  		cout<<"Y"<<"\n";
  	else
  		cout<<"N"<<"\n";
  }
  return 0;
}