#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;
ll n, k;
ll calSum(ll ba, ll i){
    return ((2*ba + i - 1) * i)/2;
}
ll bin_search(ll l, ll r){
    ll ans = 0x7fffffff;
    while(l <= r){
        ll mid = (l + r) >> 1;
        ll up = min(n + mid - 1, k);
        ll tmp1 = calSum(2, mid);
        ll tmp2 = calSum(up - mid + 1, mid);
        if(tmp1 <= n + mid - 1 && tmp2 >= n + mid -1){
            ans = min(ans, mid);
            r = mid - 1;
        }
        else if(tmp1 > n + mid - 1) r = mid - 1;
        else if(tmp2 < n + mid - 1) l = mid + 1;
    }
    if(ans != 0x7fffffff) return ans;
    else return -1;
}
int main(){
    while(cin >> n >> k){
        if(n == 1) printf("0\n");
        else cout << bin_search(1, k-1) << endl;
    }
    return 0;
}
