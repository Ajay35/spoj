
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>

using namespace std;



int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);

	LL n,x,a,b,i,j;
	while(cin>>n){
		LL dead=0;
		map<LL,int> found;
		if(n==0) break;
		cin>>a>>b;
		LL ind=0;
		while(true){
			ind=(a*(ind*ind%n)+b)%n;
			if(found[ind]==1) {
				found[ind]=-1;
				dead++;
			}
			else if(found[ind]==0) found[ind]=1;
			else if(found[ind]==-1) break ;
		}
		cout<<n-dead<<endl;

	}
	return 0;
}
