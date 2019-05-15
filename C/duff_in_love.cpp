
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

	LL n,i,j,ans;
	cin>>n;
	
	vector<LL> factors;
	for(i=1;i*i<=n;i++){

		if(n%i==0){
			if(n%i==i) factors.pb(i);
			else {
				factors.pb(i);
				factors.pb(n/i);
			}
		}
	}

	sort(factors.begin(),factors.end());


	for(i=factors.size()-1;i>=0;i--){
		bool is=0;
		for(j=2;j*j<=factors[i];j++){
			if((factors[i]%(j*j))==0){
				is=1;
				break;
			}
		}
		if(!is){
			ans=factors[i];
			break;
		}
	}
	cout<<ans;
	return 0;
}
