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
vi KMP_failure_function(string P)
{
      int k, i, x, m;
      vi f(P.size());

      m = P.length();

      f[0] = 0;      
      for(k=1;k<m;k++)
      {
        i=k-1;
        x=f[i];
        while(P[x]!=P[k])
        {
        	i = x-1;        // Try the next candidate f(.) to compute f(k)     
        	if(i<0)    // Make sure x is valid
            	break;       // STOP the search !!!
            x=f[i];
        }
        if (i<0)
            f[k] = 0;          // No overlap at all: max overlap = 0 characters
         else
            f[k] = f[i] + 1;   // We can compute f(k) using f(i)
      }
      cout<<"done"<<endl;
      return(f);
   }
int main()
{      
  fastio();
  input();
  int n,m,i,j,t;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	string s;
  	vi ans=KMP_failure_function(s);
  	cout<<ans.size()<<endl;
  	for(i=0;i<ans.size();i++)
  	{
  		if(ans[i]!=0)
  			cout<<i+1<<" "<<ans[i]<<"\n";
  	}
  }
  return 0;
}