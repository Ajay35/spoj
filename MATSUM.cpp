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
void input()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

int BIT[1025][1025];

void update(int x, int y, int range, int value)
{
    ++x; ++y; ///Index starts from 1
    int y1;
    while(x <= range)
    {
        y1 = y;
        while(y1 <= range)
        {
            BIT[x][y1] += value;
            y1 += (y1 & (-y1));
        }
        x += (x & (-x));
    }
}

int read(int x,int y)
{
    ++x; ++y;
    int y1,result = 0;

    while(x > 0)
    {
        y1 =  y;

        while(y1 > 0)
        {
           result += BIT[x][y1];
           y1 -= (y1 & (-y1));
        }
        x -= (x & (-x));
    }
    return result;
}
int main()
{
	fastio();
	input();
    int t,n,x,y,value,x1,y1,max_x,max_y,min_x,min_y,indexValue,addValue,OA,OB,OC,OD,ans;
    char str[5],ch;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        memset(BIT,0,sizeof BIT);

        while(true)
        {
            getchar();
            scanf("%s",str);
            if(strcmp(str,"END") == 0)
            {
                break;
            }
            else if(strcmp(str,"SET") == 0)
            {
                scanf("%d%d%d",&x,&y,&value);
                indexValue=read(x,y)-read(x-1,y)-read(x,y-1)+read(x-1,y-1);
                addValue = value - indexValue;
                update(x,y,n,addValue);
            }
            else if(strcmp(str,"SUM") == 0)
            {
                scanf("%d%d%d%d",&x,&y,&x1,&y1);
                max_x = max(x,x1);
                max_y = max(y,y1);
                min_x = min(x,x1);
                min_y = min(y,y1);

                OA = read(min_x-1,min_y-1);
                OB = read(min_x-1,max_y);
                OC = read(max_x,max_y);
                OD = read(max_x,min_y-1);

                ans = OC-OB-OD+OA;
                cout<<ans<<"\n";

            }
        }
    }
    return 0;
}