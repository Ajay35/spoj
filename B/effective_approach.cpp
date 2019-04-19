
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int main(){
		
	int n,q,t,i;
	ll x,y;
	map<int,int> indices;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>t;
		indices[t]=i;
	}
	x=0,y=0;
	cin>>q;
	while(q--){
		cin>>t;
		int ind=indices[t];
		x+=ind+1;
		y+=n-ind;
	}
	printf("%lld %lld",x,y);
	return 0;
}
