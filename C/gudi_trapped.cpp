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
string add_digits(string s,int n)
{
	int i;
	for(i=1;i<s.size();i+=2)
	{
		s[i]= (((s[i]-'0')+n)%10)+'0';
	}
	return s;
}
string rotate_string(string s,int n)
{
	int len=s.size();
  char result[len];
  strcpy(result,s.c_str());
  n=n%len;
  for(int i=0;i<len;i++)
  {
    int pos=(i+n)%len;
    result[pos]=s[i];
  }
  string temp(result);
  return temp;
}
int main(){
      
  fastio();
  inputread();
  int n,a,h,i,t;
  string s;
  cin>>t;
  while(t--)
  {
  	cin>>s;
  	cin>>a>>h;
  	string min_s="AAAAAAAAAAAAA";
  	map<string,int> vis;
  	queue<string> que;
  	que.push(s);
  	vis[s]=1;
  	while(!que.empty())
  	{
  		string temp=que.front();
  		que.pop();
  		string s1=rotate_string(temp,h);
  		if(strcmp(s1.c_str(),min_s.c_str())<=0)
  			min_s=s1;

  		string s2=add_digits(temp,a);
  		if(strcmp(s2.c_str(),min_s.c_str())<=0)
  			min_s=s2;
  		if(vis[s1]==0)
  		{
  			vis[s1]=1;
  			que.push(s1);
  		}
  		if(vis[s2]==0)
  		{
  			vis[s2]=1;
  			
  			que.push(s2);
  		}
  	}


  	cout<<min_s<<"\n";
  }
  return 0;
}