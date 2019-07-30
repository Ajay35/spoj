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
   int t,n;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d",&n);   
      char str[4];
      int countv=0;
      while(n--)
      {
         scanf("%s",str);
         if(!strcmp(str,"lxh"))
            countv++;
      }
      if(countv%2==0)
         printf("hhb\n");
      else
         printf("lxh\n");
   }
   return 0;
}