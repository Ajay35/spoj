
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

	int t,a,b,c=1,i;
	cin>>t;
	while(t--){
		cin>>a>>b;
		int sum=0;
		for(i=a;i<=b;i++){
			if(i&1) sum+=i;
		}
		cout<<"Case "<<c++<<": "<<sum<<"\n";
	}
	return 0;
}
