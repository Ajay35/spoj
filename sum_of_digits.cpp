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
long long dp[20][180][2]; 
  
// Stores the digits in x in a vector digit 
long long getDigits(long long x, vector <int> &digit) 
{ 
    while (x) 
    { 
        digit.push_back(x%10); 
        x /= 10; 
    } 
} 
  
// Return sum of digits from 1 to integer in 
// digit vector 
long long digitSum(int idx, int sum, int tight,vector <int> &digit) 
{ 
    if (idx == -1) 
       return sum; 
    if (dp[idx][sum][tight] != -1 and tight != 1) 
        return dp[idx][sum][tight]; 
  
    long long ret = 0;
    int k = (tight)? digit[idx] : 9; 
    for (int i = 0; i <= k ; i++) 
    { 
        int newTight=(digit[idx]==i)?tight:0;
        ret += digitSum(idx-1, sum+i, newTight, digit); 
    } 
  
    if (!tight) 
      dp[idx][sum][tight] = ret; 
  
    return ret; 
} 
  
// Returns sum of digits in numbers from a to b. 
ll rangeDigitSum(ll a, ll b) 
{ 
    // initializing dp with -1 
    memset(dp, -1, sizeof(dp)); 
  
    // storing digits of a-1 in digit vector 
    vector<int> digitA; 
    getDigits(a-1, digitA); 
  
    // Finding sum of digits from 1 to "a-1" which is passed 
    // as digitA. 
    long long ans1 = digitSum(digitA.size()-1, 0, 1, digitA); 
  
    // Storing digits of b in digit vector 
    vector<int> digitB; 
    getDigits(b, digitB); 
  
    // Finding sum of digits from 1 to "b" which is passed 
    // as digitB. 
    long long ans2 = digitSum(digitB.size()-1, 0, 1, digitB); 
  
    return (ans2 - ans1); 
} 
  
// driver function to call above function 
int main() 
{ 
	fastio();
	input();
	ll a,b;
	while(cin>>a>>b)
	{
		if(a==-1 && b==-1)
			return 0;
    	cout<<rangeDigitSum(a, b)<<"\n"; 
    }
    return 0; 
} 