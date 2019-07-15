/**
*      Name: Ajay
*      Institute: IIITH 
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
  int n,i;
    while(cin>>n)
    {
        if(n==0)
            break;
        char reg[32];
        for(int i=0;i<32;i++)
            reg[i]='?';
        for(i=0;i<n;i++)
        {
            string s;
            cin>>s;
            if(s=="CLEAR")
            {
                int b;
                cin>>b;
                b=31-b;
                reg[b]='0';
            }
            else if(s=="SET")
            {
                int b;
                cin>>b;
                b=31-b;
                reg[b]='1';
            }
            else if(s=="AND")
            {
                int a,b;
                cin>>a>>b;
                a=31-a;
                b=31-b;
                char x,y;
                x=reg[a];
                y=reg[b];
                if(y=='0')
                    reg[a]='0';
                else if(x!='?' && y!='?')
                    reg[a]=(((x-'0')&(y-'0'))+'0');              
            }
            else if(s=="OR")
            {
                int a,b;
                cin>>a>>b;
                a=31-a;
                b=31-b;
                char x,y;
                x=reg[a];
                y=reg[b];
                if(y=='1')
                    reg[a]='1';    
                else if(x!='?' && y!='?')
                    reg[a]=(((x-'0')|(y-'0'))+'0');
            }
        }
        for(i=0;i<32;i++)
            cout<<reg[i];
        cout<<"\n";
    }
    return 0;
  return 0;
}