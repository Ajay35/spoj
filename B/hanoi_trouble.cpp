
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

	int t,n,i;
	cin>>t;
	while(t--){
		cin>>n;
		vector<stack<int>> stacks(n);
		int val=1;
		while(true){
			bool act=0;
			for(i=0;i<n;i++){
				if(!stacks[i].empty()){
					long double sr = sqrt(stacks[i].top()+val);
					if(sr-floor(sr)==0){ 
						stacks[i].push(val++);
						act=1;
						break;
					}
				}
				else if(stacks[i].empty()){
					stacks[i].push(val++);
					act=1;
					break;
				}
			}
			if(!act) break;
		}
		/*for(i=0;i<n;i++){
			while(!stacks[i].empty()){
				cout<<stacks[i].top()<<" ";
				stacks[i].pop();
			}
			cout<<endl;
		}*/
		cout<<val-1<<"\n";
		//cout<<"------------"<<"\n";

	}

	return 0;
}
