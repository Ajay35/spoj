
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

int n;
int p[15];
int dp[15][15];
int s[15][15];
int t=1,c=1;
int f(int i,int j)
{
	if(j==i) 
		return 0;
	if(dp[i][j]!=INT_MAX) 
		return dp[i][j];
	int count;
	for(int k=i;k<j;k++)
	{
		count=f(i,k);
		count+=f(k+1,j);
		count+=(p[i-1]*p[k]*p[j]);
		if(count<dp[i][j]){
			dp[i][j]=count;
			s[i][j]=k;
		}
	}
	return dp[i][j];
}

void print_solution(int i,int j)
{
	if(i==j){
		cout<<"A"<<t++;
		return;
	}
	cout<<"(";
	print_solution(i,s[i][j]);
	cout<<" x ";
	print_solution(s[i][j]+1,j);
	cout<<")";
}


int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int n,i,j,x;
	while(true)
	{
		cin>>n;
		if(n==0) break;

		for(i=0;i<n;i++){
			cin>>p[i];
			cin>>x;
		}
		p[i]=x;
		//memset(dp,-1,sizeof dp);
		for(i=0;i<=n+1;i++)
			for(j=0;j<=n+1;j++)
				dp[i][j]=INT_MAX;
		f(1,n);
		cout<<"Case "<<c++<<": ";
		print_solution(1,n);
		t=1;
		cout<<"\n";
	}

	return 0;
}
	