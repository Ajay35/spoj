
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>

using namespace std;

int a[200005];
int val[200005];
int use[200005];

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int n,q,l,r,i;
	cin>>n>>q;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);

	for(i=0;i<q;i++){
		cin>>l>>r;
		l--;
		r--;
		val[l]++;
		if(r<n-1) val[r+1]--;
	}

	int v=0;
	for(i=0;i<n;i++){
		v+=val[i];
		use[i]=v;
	}
	sort(use,use+n);
	LL res=0;
	for(i=0;i<n;i++){
		res+= (a[i]*1LL*use[i]);
	}
	cout<<res;

	return 0;
}
