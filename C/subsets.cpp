

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
    int n,m,i,j,t;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    	cin>>a[i];
    for(i=0;i<pow(2,n);i++){
    	for(j=0;j<n;j++){
    		if(i & (1<<j)){
    			cout<<"i:"<<i<<" "<<"j:"<<j<<" "<<a[j]<<" ";
    		}
    	}
    	cout<<"\n";
    }
    return 0;
}



