
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vii vector<ppi>
#define vll vector<LL>
using namespace std;

int main(){
		
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

ios::sync_with_stdio(0);
cin.tie(NULL);

	int t,i,n;
	cin>>t;

	while(t--)
	{
		string s;
		bool is=0;
		cin>>n>>s;
	
		n=s.size();
		for(i=0;i<n;i++){
			if(s[i]=='8'){
				if(n-i>=11){
					is=1;
					break;
				}
			}
		}
		if(is) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";

	}
	return 0;
}
