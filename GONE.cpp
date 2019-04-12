#include <bits/stdc++.h>
using namespace std;
char cad[100];
int dp[10][62];
int primes[18] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61};

int rec(int digit, int sum)
{
    if(digit == 0) {
        return (sum == 0);
    }

    if(dp[digit][sum] != -1) {
        return dp[digit][sum];
    }

    int ret = 0;
    for(int i = 0; i <= 9; i++) {
        ret += rec(digit - 1, sum - i);
    }
    dp[digit][sum] = ret;
    return ret;
}

int solve(int x)
{
    int ret = 0;
    sprintf(cad, "%d", x);
    int len = strlen(cad);
    memset(dp, -1, sizeof(dp));
    for(int k = 17; k >= 0; k--) {
        int sum = primes[k];

        int remain = len;

        for(int i = 0; i < len; i++) {
            int digit = cad[i] - '0';
            remain--;
            for(int j = 0; j < digit; j++) {
                ret += rec(remain, sum - j);
            }
            sum -= digit;
        }
    }
    return ret;
}

void query()
{
    int a, b;
    cin >> a >> b;
    cout << solve(b + 1) - solve(a);
}
int main()
{
    int t;
    cin >> t;
    while(t--) {
        query();
        cout << endl;
    }
    return 0;
}
