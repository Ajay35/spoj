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


class order
{
public:
	int start;
	int duration;
	int price;
	bool operator<(const order& a) const
	{
		if(start+duration < a.start+a.duration)
		{
			return true;
		}
		else return false;
	}
	void print()
	{
		cout<<start<<" "<<duration<<" "<<price<<" "<<start+duration<<endl;
	}
};
order orders[10001];
ll dp[10001],n;

int search(int val,int start,int end)
{
	if(start == end) 
		return start;
	int mid=ceil((start+end)/2.0);
	struct order& temp = orders[mid];
	if(temp.start+temp.duration <= val) 
		return search(val, mid, end);
	else 
		return search(val, start, mid-1);
}

int main()
{      
  fastio();
  input();
  int i,j,t;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	for(i=1;i<=n;i++)
  	{	
  		cin>>orders[i].start>>orders[i].duration>>orders[i].price;
  	}
  	sort(orders+1,orders+n+1);
  	memset(dp,-1,sizeof dp);
  	dp[1]=orders[1].price;

  	for(i=2;i<=n;i++)
  	{
  		int next=search(orders[i].start,0,i-1);
  		if(next==0)
  			dp[i] = max(dp[i-1],(ll)orders[i].price);
  		else
  			dp[i]=max(dp[i-1],orders[i].price+dp[next]);
  	}
  	cout<<dp[n]<<"\n";
  }

  return 0;
}