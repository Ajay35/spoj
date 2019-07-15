/**
*	  Name: Ajay
*	  Institute: IIITH 
*/

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
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loope(i,a,b) for(int i=a;i<=b;i++)
#define LL long long
#define inf 0x7fffffff
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vii vector<ppi>
#define vll vector<LL>
#define mp make_pair
#define fi first
#define se second
using namespace std;

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

int main()
{      
  fastio();
  input();
  LL e,f,s,m,ed,fd,sd,md,cakes=inf;
  while(cin>>e>>f>>s>>m>>ed>>fd>>sd>>md)
  {
    if(e==-1 && ed==-1 && f==-1 && fd==-1 && s==-1 && sd==-1 && m==-1 && md==-1)
      break;
    LL anse=inf,ansf=inf,anss=inf,ansm=inf;
    LL l=0,r=1e16;
    while(l<=r)
    {
      LL mid=(l+r)/2;
      LL need_e=(mid*ed)-e;
      LL need_f=(mid*fd)-f;
      LL need_s=(mid*sd)-s;
      LL need_m=(mid*md)-m;
      if(need_e>=0 && need_f>=0 && need_s>=0 && need_m>=0)
      {
      	cakes=min(cakes,mid);
        anse=min(anse,need_e);
        ansf=min(ansf,need_f);
        anss=min(anss,need_s);
        ansm=min(ansm,need_m);
        r=mid-1;
      }
      else
        l=mid+1;
    }
    //cout<<cakes<<"\n";
    cout<<anse<<" "<<ansf<<" "<<anss<<" "<<ansm<<"\n";
  }
  return 0;
  return 0;
}