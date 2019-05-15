#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long prod(long long a, long long b, long long mod = MOD)
{
    long long res = 0;

    while(b)
    {
        if(b & 1)
            res = (res + a) % mod;
        a = (a + a) % mod;

        b >>= 1;
    }

    return res;
}

long long bpow(long long a, long long b, long long mod = MOD)
{
    long long res = 1;

    while(b)
    {
        if(b & 1)
            res = prod(res, a, mod);
        a = prod(a, a, mod);

        b >>= 1;
    }

    return res;
}

void solve()
{
    long long a, b, n;

    cin >> a >> b >> n;

    if(a == b)
    {
        cout << (bpow(a, n) + bpow(b, n)) % MOD << '\n';
    }else
    {
        long long d = (bpow(a, n, a - b) + bpow(b, n, a - b)) % (a - b);

        cout << __gcd(d, a - b) << '\n';
    }
}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int t;
    cin >> t;

    while(t --> 0)
        solve();

    return 0;
}