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
int main()
 {
 	fastio();
 	input();
  // freopen("abc.txt","r",stdin);
  int n,t,te;
  cin>>te;
  while(te--)
     {
      int visited[100][1010];
      cin>>n>>t;
      
       
       for(int i=0;i<n;i++)
        {
          for(int j=0;j<1010;j++)
           visited[i][j]=inf;
        }
      
      if(n==0 && t==0 )break;
      int cost[100][100];
      int time[100][100];
      for(int i=0;i<n;i++)
           for(int j=0;j<n;j++)       
                cin>> time[i][j];
              
      for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
          cin>>cost[i][j];
      
       queue<pair<pair<int,int>,int> >s;
       s.push(make_pair(make_pair(0,0),0));
       visited[0][0]=0;
       
     
       int anst=inf,ansc=inf;
       while(!s.empty())
       {
            int start=s.front().first.first;
            int cu=s.front().second;
            int tu=s.front().first.second;
            s.pop();
            
            for(int i=0;i<n;i++)
            {
                if(visited[i][tu+time[start][i]]>cu+cost[start][i] && i!=start && tu+time[start][i]<=t)
                {
              
                    visited[i][tu+time[start][i]]=cu+cost[start][i];
                    s.push(make_pair(make_pair(i,tu+time[start][i]),cu+cost[start][i]));  
                    if(i==n-1)
                    {
                        if(ansc>cu+cost[start][i])
                        {
                            ansc=cu+cost[start][i];
                            anst=tu+time[start][i];
                        }
                    } 
                }
             }
        }
        if(ansc!=inf)
       		cout<<ansc<<" "<<anst<<endl;
       	else
       		cout<<-1<<endl;
    }
  

 }
