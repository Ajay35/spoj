#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll calc(ll n){
	ll sum=0;

	while(n>0){
		sum+=pow(n%10,2);
		n=n/10;
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	int n;

	cin>>n;
	bool flag=false;
	int c=0;
	map<ll,int> found;
	while(true){
		ll temp=calc(n);
		c++;
		if(temp==1){
			flag=true;
			break;
		}
		if(found.find(temp)!=found.end()){
			break;
		}
		found[temp]++;
		n=temp;
	}
	if(flag) cout<<c<<endl;
	else cout<<-1<<endl;
	return 0;
}