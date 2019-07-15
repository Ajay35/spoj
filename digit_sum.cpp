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
ll sum_of_digits(ll n){
	ll sum = 0;
	while(n){
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}

ll find_digit_sum(ll n, ll mul){
	if(n <= 0)
		return 0;
	ll sum = 0;
	ll last_digit = n % 10;
	ll rem_part = n / 10;
	sum += ((last_digit * (last_digit + 1) / 2) * mul);
	ll sod = sum_of_digits(rem_part);
	sum += (sod * (last_digit + 1) * mul);
	sum += (rem_part * 45 * mul);
	return sum + find_digit_sum(rem_part - 1, mul * 10);
}

int main()
{
	fastio();
	input();

	ll a, b;
	int t;
	cin >> t;
	while(t--){
		cin >> a >> b;
		ll sum1 = find_digit_sum(b, 1);
		ll sum2 = find_digit_sum(a-1, 1);
		cout << sum1 - sum2 << endl;
	}
    return 0;
}
