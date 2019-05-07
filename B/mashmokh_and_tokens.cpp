
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();

using namespace std;



int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,a,b,i,j;

	cin>>n>>a>>b;

	for (int i = 0; i < n; i++) {

		LL w;
		cin>>w;
		//calculate k0
		LL mod = (w * a) % b;
		LL k0 = mod / a;
		cout<<k0<<" ";
	}
	return 0;
}
