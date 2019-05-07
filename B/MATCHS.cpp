
#include<bits/stdc++.h>
#define LL long long
#define mod 1000000007
#define inf std::numeric_limits<int>::max()
#define neginf std::numeric_limits<int>::min()
using namespace std;

int solve(LL n,LL m,int turn){
	
	if(n==0 || m==0) return turn;
	if(turn){
		if(n>=m){
			if(n-m*(n/m)==1) return solve(n-(m)*((n/m)-1),m,0);
			return solve(n-m*(n/m),m,0);
		}
		else{
			if(m-n*(m/n)==1) return solve(m-(n)*((m/n)-1),m,0);
			return solve(n,m-n*(m/n),0);
		}	
	}
	else{
		if(n>=m){
			if(n-m*(n/m)==1) return solve(n-(m)*((n/m)-1),m,0);
			return solve(n-m*(n/m),m,1);
		}
		else{
			if(m-n*(m/n)==1) return solve(m-(n)*((m/n)-1),m,0);
			return solve(n,m-n*(m/n),1);
		}
	}
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

    ios::sync_with_stdio(0);
    cin.tie(NULL);
	LL t,n,m,i;

	cin>>t;

	while(t--){
		cin>>n>>m;
		int win=solve(n,m,1);
		if(!win) cout<<"Ari"<<endl;
		else cout<<"Rich"<<endl;	
	}
	return 0;
}
