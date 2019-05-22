

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <deque>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <map>
#include <set>
#include <ctime>
#include <string.h>
#define LL long long
#define inf 0x7fffffff
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vii vector<ppi>
#define vll vector<LL>
#define mp make_pair
using namespace std;

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

int main(){
        
    fastio();
    inputread();
    int i=-1,m,n;
    scanf("%d %d",&m,&n);
    m=(m>n)?n:m;
    printf("%d\n",m+1);
    while(i<m)
        printf("%d %d\n",++i,m-i-1);
    return 0;
}



