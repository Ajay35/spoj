#include <bits/stdc++.h>
#define ll long long
using namespace std;

char solve(ll n){
	if(n==1) return 'Y';
	ll l=1,b=1;
	while(true){
		b=3*l*(l-1)+1;
		if(b>=n) break;
		l+=1;
		//cout<<b<<endl;
	}
	if(b==n) return 'Y';
	return 'N';

}

int main(int argc, char const *argv[])
{
	ll n;
	while(true){
		cin>>n;
		if(n==-1) break;
		cout<<solve(n)<<endl;
	}
	return 0;
}