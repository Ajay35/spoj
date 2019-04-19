
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int main(){
	
	ll n,x,i,hrs;

	cin>>n>>x;
	ll a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	hrs=0;
	for(i=0;i<n; ++i){
		
		hrs+=a[i]*(std::max(x,(ll)1));
		x--;
	}	
	printf("%lld",hrs);
	return 0;
}
