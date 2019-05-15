
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>

using namespace std;

bool primes[20000001];

int main(){
		
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

ios::sync_with_stdio(0);
cin.tie(NULL);

	int n,i,j;

	/* Sieve of eotshch */
	memset(primes,true,sizeof(primes));
	for(i=2;i*i<=20000000;i++){
		if(primes[i])
		{
			for(j=i*i;j<=20000000;j+=i)
			{
				primes[j]=false;
			}
		}
	}
	vector<pair<LL,LL>> twins;
	for(LL i=2;i+2<=20000000;i++){
		if(primes[i] && primes[i+2]){
			twins.pb({i,i+2});
		}
	}

	while(cin>>n){
		cout<<"("<<twins[n-1].first<<","<<" "<<twins[n-1].second<<")"<<"\n";
	}
	return 0;
}
