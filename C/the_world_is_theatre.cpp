
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

LL C(int n,int k)
{
    if(k==1) return n;
    if(n==k || k==0) return 1;

    LL C[k+1]={0};
    C[0]=1;
    int i,j;
    for(i=0;i<=n;i++){
        for(j=min(i,k);j>0;j--){
            C[j]=C[j]+C[j-1];
        }
    }
    return C[k];
}

int main(){
        
    fastio();
    inputread();
    int n,m,i,j,t;
    cin>>n>>m>>t;
    LL total=0;
    for(i=4;i<=n;i++){
      for(j=1;j<=m;j++){
        if(i+j==t)
          total+= C(n,i)*C(m,j);
      }   
    }
    cout<<total;
    return 0;
}

