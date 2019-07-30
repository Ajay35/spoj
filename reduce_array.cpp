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
  int n,i,t;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	priority_queue<ll,vll,greater<ll>> pq;
  	for(i=0;i<n;i++)
  	{
  		ll x;
  		cin>>x;
  		pq.push(x);
  	}
  	ll sum=pq.top();
  	pq.pop();
  	ll cost=0;
  	while(!pq.empty())
  	{
  		int cur=pq.top();
  		pq.pop();
  		if(cur<sum) 
  		{
            pq.push(sum);
            sum=cur;
        }
        else 
        {
            sum+=cur;
            cost+=sum;
            continue;
        }

        sum+=pq.top();
        pq.pop();
        cost+=sum;
  	}
  	cout<<cost<<"\n";
  }
  return 0;
}