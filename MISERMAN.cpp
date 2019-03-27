#include<stdio.h>
int min(int a,int b)
{
	return a<b? a:b;
}
main()
{
	int n,m,mi,i,j;
	int dp[101][101] = {0};
	scanf("%d%d",&n,&m);
	for(i=0;i<=n;i++)
		dp[i][m+1] = dp[i][0] = 100000;

	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d",&dp[i][j]);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			dp[i][j] += min(dp[i-1][j],min(dp[i-1][j-1],dp[i-1][j+1]));
	mi = 100000;
	for(i=1;i<=m;i++)
		if(dp[n][i]<mi)
			mi = dp[n][i];
	printf("%d\n",mi);
	return 0;
}
