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
#include <bitset>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loope(i,a,b) for(int i=a;i<=b;i++)
#define ll long long
#define inf 0x7fffffff
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vii vector<ppi>
#define vll vector<LL>
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


string add(string str1, string str2) 
{ 
    if (str1.length() > str2.length()) 
        swap(str1, str2); 
    string str = ""; 
    int n1 = str1.length(), n2 = str2.length(); 
    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end()); 
  
    int carry = 0; 
    for (int i=0; i<n1; i++) 
    { 
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
    for (int i=n1; i<n2; i++) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
    if (carry) 
        str.push_back(carry+'0'); 
    reverse(str.begin(), str.end());
    return str; 
} 
ll power(ll x,ll y)
{
	ll res=1;
	while(y)
	{
		if(y&1)
			res=res*x;
		x=x*x;
		y=y>>1;
	}
	return res;
}
int main()
{      
  fastio();
  input();
  int t;
  ll k;
  cin>>t;
  while(t--)
  {
    cin>>k;
    ll p=(ll)(log2(k));
    if(power(2,p+1)-1==k)
    {
    	ll x=0;
       	while(p>=0)
      		x+=(5*pow(10,p--));
      	cout<<x<<"\n";
      	continue;
    }
  	ll tmp=p;
  	string fives=string(tmp,'5');
  	
  	ll low=power(2,p)-1;
    string x=std::bitset<64>(k-low).to_string();
    while(x.size()>0 && x[0]=='0')
    	x=x.substr(1);
    cout<<add(fives,x)<<endl;
  }
  
  return 0;
}