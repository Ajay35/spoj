#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,arr[2010],dp[2010][2010];

int solve(int year,int start,int end){
	if(start>end) return 0;
	if(dp[start][end]!=-1) return dp[start][end];
	return dp[start][end]=max(solve(year+1,start+1,end)+year*arr[start],solve(year+1,start,end-1)+year*arr[end]);
}

int main(){
	cin>>n;
	memset(dp,-1,sizeof dp);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<solve(1,0,n-1)<<endl;
}