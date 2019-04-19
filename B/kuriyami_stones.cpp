
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int main(){
	
	ll n,i,q,l,r,t;
	cin>>n;
	ll a[n];
	ll sa[n];

	for(i=0;i<n;i++){
		cin>>a[i];
		sa[i]=a[i];
	}
	sort(sa,sa+n);
	for(i=1;i<n;i++){
		a[i]=a[i]+a[i-1];
		sa[i]=sa[i]+sa[i-1];
	}
	cin>>q;
	while(q--){
		cin>>t>>l>>r;
		if(t==1) (l-1)==0?printf("%lld\n",a[r-1]):printf("%lld\n",a[r-1]-a[l-2]);
		else (l-1)==0?printf("%lld\n",sa[r-1]):printf("%lld\n",sa[r-1]-sa[l-2]);
	}
	return 0;
}
