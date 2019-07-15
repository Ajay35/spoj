

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <deque>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <map>
#include <unordered_map> 
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
int main()
{
    fastio();
    inputread();
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    vector<LL> LHS,RHS;
    int i,j,k,l,m,p;
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        for(k=0;k<n;k++){
          LL lhs=(a[i]*a[j]+a[k]);
          if(a[k]!=0)
          {
            LL rhs=((a[i]+a[j])*a[k]);
            RHS.pb(rhs);
          }
          LHS.pb(lhs);
        }
      }
    }
    
    //sort(LHS.begin(),LHS.end());
    sort(RHS.begin(),RHS.end());
    
    for(i=0;i<LHS.size();i++)
    {
      vector<LL>::iterator it=lower_bound(RHS.begin(),RHS.end(),LHS[i]);
      if(it==RHS.end())
        continue;
      vector<LL>::iterator it1=upper_bound(RHS.begin(),RHS.end(),LHS[i]);
      count+=(it1-it);
    }

     
    cout<<count<<"\n";
    
    return 0;
}