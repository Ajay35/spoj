
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>

using namespace std;

unsigned LL power(int x,int y){
	LL res=1;

	while(y>0){
		if(y&1) res=(res*x);
		x=(x*x);
		y=y>>1;
	}
	return res;
}
int main(){
		
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

ios::sync_with_stdio(0);
cin.tie(NULL);

	int n,i,j,k;
	cin>>n;
	bool ans=0;
	int a,b,c;
	for(i=1;i<=100;i++){
		for(j=i+1;j<=100;j++){
			for(k=j+1;k<=100;k++){
				unsigned LL lhs= (power(i,n)+power(j,n));
				unsigned LL	rhs=power(k,n);
				if(lhs==rhs){
					a=i;
					b=j;
					c=k;
					ans=1;
					break;
				} 
			}
			if(ans) break;
		}
		if(ans) break;
	}
	if(ans)
	cout<<a<<" "<<b<<" "<<c;
	else
	cout<<-1;	
	return 0;
}
