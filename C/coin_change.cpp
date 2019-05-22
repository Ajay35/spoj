#include <iostream>
#include <cstdio>
#include <algorithm>
#include <deque>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <queue>
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
int a[5001];
int tree[4*5001];

void 

int main(){
        
    fastio();
    inputread();
    LL n,m,i,j,k,t;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
      cin>>m;
      ind[m]=i+1;
    }
    LL sum=0;
    for(i=0;i<n;i++)
    {
      for(j=i;j<n;j++){
          for(k=i;k<=j;k++)
          {

          }
      }
    }
    cout<<sum;

    return 0;
}



