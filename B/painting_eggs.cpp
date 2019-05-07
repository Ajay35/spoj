	
	#include <bits/stdc++.h>
	#define ll long long
	#define inf std::numeric_limits<int>::max();
	
	using namespace std;
	
	int main(){
			
		#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
		#endif
		
		int n,i,j,a,g,ta,tg,diff;
		string ans="";
		ta=0;
		tg=0;
		diff=0;
		cin>>n;

		for(i=0;i<n;i++){
			cin>>a>>g;
			diff=abs(ta-tg);
			if(abs((ta+a)-tg)<=500){
				ta+=a;
				ans+='A';
			}
			else if(abs((tg+g)-ta)<=500){
				tg+=g;
				ans+='G';
			}
		}
		cout<<ans<<"\n";
		return 0;
	}
	