#include <bits/stdc++.h>
using namespace std;
int dp[1010][1010];

int solve1(int h,int a,char ch){
	if(h<=0 or a<=0) return -1;
	if(dp[h][a]!=-1) return dp[h][a];
	int x=0,y=0,z=0;
	if(ch=='a')  x=max(solve1(h-5,a-10,'w'),solve1(h-20,a+5,'f'));
	else if(ch=='w') y=max(solve1(h+3,a+2,'a'),solve1(h-20,a+5,'f'));
	else z=max(solve1(h+3,a+2,'a'),solve1(h+5,a-10,'w'));
	return dp[h][a]=1+max(x,max(y,z));
}

int solve(int x, int y)
{
    if(x<=0||y<=0)
        return -1;
    else if(dp[x][y]==-1)
    {
    dp[x][y] = max( solve(x-17,y+7)+2, solve(x-2,y-8)+2 );
    }
    return dp[x][y];
}

int main(int argc, char const *argv[])
{
	int t,h,a;
	cin>>t;
	while(t--){
		memset(dp,-1,sizeof dp);
		cin>>h>>a;
		if(h==0 or a==0) cout<<0<<endl;
		//else cout<<max(solve(h-20,a+5,'f'),max(solve(h+3,a+2,'a'),solve(h+5,a-10,'w')))<<endl;
		else cout<<solve(h,a)<<endl;
	}
	return 0;
}
