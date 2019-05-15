	
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
	
		int n,i,j;
		cin>>n;
		
		if(n&1){
			for(i=0;i<n;i++){
				cout<<i<<" ";
			}
			cout<<endl;
			for(i=0;i<n;i++){
				cout<<i<<" ";
			}
			cout<<endl;
			for(i=0;i<n;i++){
				cout<<(i+i)%n<<" ";
			}
			cout<<endl;
		}
		else cout<<-1<<endl;
		return 0;
	}
	