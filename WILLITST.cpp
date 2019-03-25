#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll n;
	while(cin>>n){
		if(n>1 and (n && (!(n&(n-1))))) cout<<"TAK"<<endl;
		else cout<<"NIE"<<endl;
	}
	return 0;
}