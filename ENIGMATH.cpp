#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b){
	ll t;
	while (b != 0){
       t=b; 
       b=a%b; 
       a=t; 
   }
    return a;
}

int main(int argc, char const *argv[])
{
	ll t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a==0 or b==0) cout<<0<<" "<<0<<endl;
		ll x=(a*b)/gcd(a,b);
		cout<<x/a<<" "<<x/b<<endl;
	}
	return 0;
}