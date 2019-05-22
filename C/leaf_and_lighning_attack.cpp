	#include <iostream>
	#include <cstdio>
	#include <cassert>
	using namespace std;
	const long long MOD = 1e9 + 9;
	const int MAX = 1e7 + 5;
	long long a[MAX];
	void fastio()
	{
	    ios_base::sync_with_stdio(false);
	    cin.tie(0);
	    cout.tie(0);
	}
	void inputread()
	{
	    #ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	    #endif
	}

	int main()
	{
			fastio();
			inputread();
	    int n, testcases;
	    long long x;
	    a[0] = 0;
	    a[1] = 1;
	    for(long long i = 2;i < MAX;++i)
	    {
	        x = (i*i) % MOD;
	        a[i] = a[i-2] + 4*x - 6*(i-1);
	        a[i] %= MOD;
	        if(a[i] < 0)
	            a[i] += MOD;
	        assert(a[i] >= 0 and a[i] <= MOD);
	    }
	    cin >> testcases;
	    assert(1 <= testcases and testcases <= 100000);
	    for(int i = 0;i < testcases;++i)
	    {
	        cin >> n;
	        assert(n >= 1 and n <= 1e7);
	        cout << a[n] << endl;
	    }
	    return 0;
	}
