#include<bits/stdc++.h>
#define mod 1000007
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	ll t,n;
	cin>>t;

	while(t--){
		cin>>n;
		if(n==0){
			cout<<0<<endl;
			continue;
		}
		else if(n==1){
			cout<<3<<endl;
			continue;
		}
		ll ans;
		ll n1=n-1;
		ans=((n*(n+1)))+((n1)*(n1+1))/2;
		cout<<ans%mod<<endl;
	}
	return 0;
}