
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>

using namespace std;

LL binomialCoeff(int n, int k) 
{ 
    LL C[k+1];
    memset(C,0,sizeof C);
    C[0]=1; 
    int i,j; 
 
    for(i=0;i<=n;i++){ 
        for(j=min(i,k);j>0;j--) {  
            C[j]=C[j]+C[j-1];
        } 
    } 
    return C[k]; 
} 

int main(){
		
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

ios::sync_with_stdio(0);
cin.tie(NULL);

	int n,m,i;
	while(cin>>n>>m){
		if(n==0 && m==0) break;
		cout<<n<<" things taken "<<m<<" at a time is "<<binomialCoeff(n,m)<< " exactly."<<endl;
	}

	return 0;
}
