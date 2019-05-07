
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int n,m,a,b,fa[100];

int find(int x) {
	if (fa[x] != x)	fa[x] = find(fa[x]);
	return fa[x];
}

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int i;
	cin>>n>>m;

	for(i=1;i<=n;i++)
		fa[i]=i;
	for(i=1;i<=m;i++){
		cin>>a>>b;
		fa[find(a)]=find(b);
	}

	ll ans=(1LL<<n);
	for(i=1;i<=n;i++){
		if(find(i)==i) ans=ans/2;
	}

	cout<<ans;
	return 0;
}
