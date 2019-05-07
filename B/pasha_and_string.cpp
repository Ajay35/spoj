
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n,i,q,x;
	string str;
	cin>>str;
	str='&'+str;
	n=str.size();
	cin>>q;
	int a[200002];

	for(i=1;i<=q;i++){
		cin>>x;
		a[x]++;
	}

	for(i=1;i<=n/2;i++){
		a[i]=(a[i-1]+a[i])%2;
	}
	for(i=1;i<=n/2;i++){
		if(a[i]==1){
			swap(str[i],str[n-i]);
		}
	}
	cout<<str.substr(1);
	return 0;
}
