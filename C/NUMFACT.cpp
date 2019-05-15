
#include <bits/stdc++.h>
#define LL long long
#define inf 0x3f3f3f3f
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vii vector<ppi>
#define vll vector<LL>
#define mi map<int,int>
#define mll map<LL,LL>
using namespace std;


void factor(int v, map<int, int> &factors) {
    int i=2;
    while (v > 1) {
        if (v % i == 0) {
            while(v%i == 0) {
                factors[i]++;
                v /= i;
            }
        }
        i++;
    }
}

void solve(int tcase) {
    int n;
    cin>>n;
    vi a(n);
    for (int i=0;i<n;i++) 
    	cin>>a[i];
    mi factors;
    for(auto v : a) {
        factor(v, factors);
    }
    LL r = 1;
    for (auto &p : factors) {
        r = r * (p.second + 1);
    }
    cout<<r<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cout.tie(NULL);
 	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int t;
    cin>>t;
    for (int i=1;i<=t;i++) solve(i);

    return 0;
}