#include<bitset>
#include<cmath>
#include<cstdio>
#include<vector>
 #include <bits/stdc++.h>
using namespace std;
 
bitset<10000010> bs;
vector<int> primes;
vector<vector<int> > factors;
vector<int> end_index;
 
int n;
 
void sieve(long long upper_bound) {
    bs.set();
    bs[0] = bs[1] = 0;
    for(long long i = 2; i <= upper_bound + 1; i++) {
        if(bs[i]) {
            for(long long j = i * i; j <= upper_bound + 1; j += i)
                bs[j] = 0;
            primes.push_back((int) i);
        }
    }
}
 
vector<int> prime_factors(int n) {
    vector<int> factors;
    int pf_index = 0;
    long pf = primes[pf_index];
 
    while(pf * pf <= n) {
        if(n% pf==0) factors.push_back(pf);
        while(n % pf == 0) {
            n /= pf;
        }
        pf = primes[++pf_index];
    }
    if(n != 1)
        factors.push_back(n);
 
    return factors;
}
 
int main() {
    sieve(1000000);
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    while(cin>>n) {
        if(n == 0) break;
        vector<int> factors = prime_factors(n);
        cout<<n<<" : "<<factors.size();
        printf("\n");
    }
}