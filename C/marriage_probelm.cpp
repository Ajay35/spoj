#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back
#define mk make_pair
ll power(ll a, ll b) {
ll x = 1, y = a;
    while(b > 0) {
        if(b%2 == 1) {
            x=(x*y);
            if(x>mod) x%=mod;
        }
        y = (y*y);
        if(y>mod) y%=mod;
        b /= 2;
    }
    return x;
}
int par[2000002];
int m[2000002],w[2000002];
int func(int x)
{
	if(x != par[x]) {
		par[x] = func(par[x]);
	}
	return par[x];
}
int main() 
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	int x,y;
	cin>>x>>y;
	int q1,q2,q3,a,b,i;
	for(i = 1; i <= 2000000; i++) {
		par[i] = i;
	}
	cin>>q1;
	while(q1--) {
		cin>>a>>b;
		if(b < a) {
			swap(a,b);
		}
		int u,v;
		u = func(a);
		v = func(b);
		if(par[u] == par[v]) continue;
		par[v] = par[u];
	}
	cin>>q2;
	while(q2--) {
		cin>>a>>b;
		if(b < a) {
			swap(a,b);
		}
		int u,v;
		a += 1000000;
		b += 1000000;
		u = func(a);
		v = func(b);
		if(par[u] == par[v]) continue;
		par[v] = par[u];
	}
	cin>>q3;
	while(q3--) {
		cin>>a>>b;
		int u,v;
		b += 1000000;
		u = func(a);
		v = func(b);
		if(par[u] == par[v]) continue;
		par[v] = par[u];
	}
	for(i = 1; i <= x; i++) {
		int u = func(i);
		m[u]++;
	}
	for(i = 1; i <= y; i++) {
		int u = func(i+1000000);
		w[u]++;
	}
	ll ans = 0;
	for(i = 1; i <= x; i++) {
		if(m[i]) {
			ans += (long long)(m[i])*(y-w[i]);
		}
	}
	cout<<ans<<endl;
	return 0;
}