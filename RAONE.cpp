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
long long dp[20][180][180][2]; 
  
// Stores the digits in x in a vector digit 
long long getDigits(long long x, vector <int> &digit) 
{ 
    while (x) 
    { 
        digit.push_back(x%10); 
        x /= 10; 
    } 
} 
  
long long digitSum(int idx, int odd_sum,int even_sum,int tight,vector <int> &digit,int cur) 
{ 
    if(idx==-1) 
    {
     	if(even_sum==(odd_sum+1))
     		return 1;
       return 0;
    }
   
    long long ret = 0;
    int k = (tight)? digit[idx] : 9; 
  	// 342 vector<int> digits={2,4,3};
    for (int i = 0; i <= k ; i++) 
    { 
        int newTight=(digit[idx]==i)?tight:0;
        
        if(cur&1)
        	odd_sum+=i;
        else
        	even_sum+=i;
        if(cur==1 && i!=0)
        	cur+=1;
        else if(i!=0 && cur>1)
        	cur+=1;
        ret += digitSum(idx-1,odd_sum,even_sum,newTight,digit,cur); 
    }
    return ret; 
} 
  
ll rangeDigitSum(ll a, ll b) 
{ 
    memset(dp,-1,sizeof(dp)); 
    vector<int> digitA; 
    getDigits(a-1, digitA); 
    long long ans1 = digitSum(digitA.size()-1,0,0,1,digitA,1); 
    vector<int> digitB; 
    getDigits(b, digitB);
    long long ans2 = digitSum(digitB.size()-1,0,0,1, digitB,1);
    return (ans2-ans1); 
} 
  
// driver function to call above function 
int main() 
{ 
	fastio();
	input();
	ll a,b,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<rangeDigitSum(a, b)<<"\n"; 
    }
    return 0; 
} 