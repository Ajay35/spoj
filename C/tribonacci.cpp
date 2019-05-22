

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

LL solve(LL mat[3][3],LL p)
{
	LL res[3][3]={{1,0,0},{0,1,0},{0,0,1}};
	LL temp[3][3];
	int i,j,k;
	while(p)
	{
		if(p&1)
		{
			memset(temp,0,sizeof temp);

			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					for(k=0;k<3;k++){
						temp[i][j]+=(res[i][k]*mat[k][j])%mod;
					}
				}
			}

			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					res[i][j]=temp[i][j];
				}
			}
		}
		memset(temp,0,sizeof temp);
		for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					for(k=0;k<3;k++){
						temp[i][j]+=(mat[i][k]*mat[k][j])%mod;
					}
				}
			}

		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				mat[i][j]=temp[i][j];
			}
		}
		p>>=1;
	}

	/*for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<"\n";
	}*/

	return res[0][0];
}

int main(){
        
    fastio();
    inputread();
    LL n,t;
    cin>>t;
    while(t--)
    {
	    LL mat[3][3]={{1,1,1},{1,0,0},{0,1,0}};
	    cin>>n;
	    cout<<solve(mat,n+1)%mod<<"\n";
	}
    return 0;
}



