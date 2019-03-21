#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
	ll t,n,c;
	cin>>t;
	while(t--){
		cin>>n;
		ll s=0;
		for(ll i=0;i<n;i++){
			cin>>c;
			s+=c;
			s=(s%n);
		}
		if(s%n==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}