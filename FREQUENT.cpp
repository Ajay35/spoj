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
#define ll long long
#define inf 0x7fffffff
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<ppi>
#define vll vector<ll>
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
void read_input()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}
int N , Q , arr[100000+10] , ans[100000+10] , cnt[200000+10] , freq[200000+10] , maxi , block = 550 ;

struct Node
{
    int L , R , id ;
    bool operator < (const Node &A) const
    {
        if(L/block == A.L/block) return R < A.R ;
        else return L/block < A.L/block ;
    }
}input[100010];

void add(int index)
{
    if(index==0) 
    	return ;
    if(cnt[arr[index]]!=0) 
    	freq[cnt[arr[index]]]--;
    cnt[arr[index]]++;
    freq[cnt[arr[index]]]++;
    if(cnt[arr[index]]>maxi) 
    	maxi = cnt[arr[index]] ;
}

void remove(int index)
{
    if(index==0) 
    	return ;
    freq[cnt[arr[index]]]--;
    if(freq[maxi]==0) 
    	maxi--;
    cnt[arr[index]]--;
    if(cnt[arr[index]]!=0)
    	freq[cnt[arr[index]]]++;
}

int main()
{
    fastio();
    read_input();
    while( scanf("%d",&N)==1 && N!=0 )
    {
        scanf("%d",&Q);
        for(int i=1;i<=N;i++)
        {
            scanf("%d",&arr[i]);
            arr[i]+=100000;
        }
        for(int i=1;i<=Q;i++)
        {
            scanf("%d%d",&input[i].L,&input[i].R);
            input[i].id = i ;
        }
        sort(input+1,input+Q+1);
        int currentL = 0 , currentR = 0 ;
        for(int i=1;i<=Q;i++)
        {
            int L = input[i].L , R = input[i].R ;
            while( currentL < L ) remove(currentL++);
            while( currentL > L ) add(--currentL) ;
            while( currentR < R ) add(++currentR);
            while( currentR > R ) remove(currentR--);
            ans[input[i].id] = maxi ;
        }
        for(int i=1;i<=Q;i++) printf("%d\n",ans[i]);
        for(int i=0;i<=200000;i++) freq[i] = cnt[i] = maxi = 0 ;
    }
    return 0;
}