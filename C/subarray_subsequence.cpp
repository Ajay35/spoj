/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: Indian Institute of Technology Hyderabad 
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
int a[100001];
int n;
LL maxsum()
{
	LL i,max_end_here=0,max_so_far=-inf;

	for(i=0;i<n;i++)
	{
	  max_end_here=max_end_here+a[i];
		if(max_end_here>max_so_far)
			max_so_far=max_end_here;
		if(max_end_here<0)
			max_end_here=0;
	}
	return max_so_far;
}
LL maxseq(int i)
{

	if(i==n)
		return 0;
	return max(a[i]+maxseq(i+1),maxseq(i+1));
}
bool all_neg()
{
    for(int i=0;i<n;i++)
        if(a[i]>=0)
            return 0;
    return 1;
}
int main(){
      
  fastio();
  inputread();
  int i,j,t;
  cin>>t;
  while(t--)
  {
	  cin>>n;
	  for(i=0;i<n;i++)
	  	cin>>a[i];
	  cout<<maxsum()<<" ";
	  if(all_neg())
	    cout<<*max_element(a,a+n)<<"\n";
	  else
	    cout<<maxseq(0)<<"\n";
	}
  return 0;
}