#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
 
#define inf 0x3f3f3f3f
#define PI acos(-1)
#define eps 1e-9
//#define inf 100000000
#define MOD 1000000007
 
#define mem(a,b) memset(a, b, sizeof(a) )

#define ll long long int
#define ff first
#define ss second
#define sc(a)           scanf("%d", &a)
#define sc2(a, b)       scanf("%d%d", &a, &b)
#define sc3(a, b, c)    scanf("%d%d%d", &a, &b, &c)
#define SS(a) scanf("%lli", &a)
#define P(a) printf("%i", a)
#define PP(a) printf("%lli", a)

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define REP(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
void fastio()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}
void input()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}
int mx;
string v;
ll dp[50][18][18][18];// pos, restrict, flag, cn3, cn6, cn9

ll call(int pos, bool flag, int cn3, int cn6, int cn9){
    if(cn3 >= 17 or cn6 >= 17 or cn9 >= 17) return 0;
    if(pos == -1) {
        return cn3 == cn6 and cn6 == cn9 and (cn9 != 0);
    }
   
    ll &ret = dp[pos][cn3][cn6][cn9];
    if(!flag and ret != -1) return ret % MOD;
   
    ll ans = 0;
   
    int k = flag ? v[pos] - '0' : 9;
    
    for(int i = 0; i <= k; i++){
        ans += (call(pos - 1, flag and (i == k), (i == 3) + cn3, (i == 6) + cn6, (i == 9) + cn9) % MOD) % MOD;
        ans %= MOD; 
    }
    return flag ? ans : ret = ans;
}

ll process(string x){
    v = x;
    mx = v.size();
    reverse(v.begin(), v.end());
    return call(mx - 1, true, 0, 0, 0);

}
char a[100], b[100];
void decrese(){
    int len = strlen(a) - 1;
    if(a[len] != '0'){
        a[len] = (a[len] - '0' - 1) + '0';
    }
    else {
        while(true){
            if(a[len] == '0'){
                a[len] = '9';
                len--;
            }  
            else {
                a[len] = (a[len] - '0' - 1) + '0';
                break;
            }
        }
    }
}

int main(){
    
    int t;
	fastio();
	input();
    sc(t);
    mem(dp, -1);
    while(t--){
      scanf("%s %s", a, b);
      decrese();
      ll ans = process(b) - process(a);
      printf("%lli\n", (ans + MOD) % MOD) ;
    }   

    return 0;
}