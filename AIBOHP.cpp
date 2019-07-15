#include<bits/stdc++.h>
using namespace std;
int dp[6110][6110];

int main(int argc, char const *argv[])
{
	int t;
	string str,str1;

	cin>>t;
	while(t--){
		memset(dp,-1,sizeof dp);
		cin>>str;
		str1=str;
		int len1=str.size();
		reverse(str1.begin(),str1.end());


		for(int i=0;i<=len1;i++)
		{
			for(int j=0;j<=len1;j++)
			{
				if(i==0 or j==0) 
					dp[i][j]=0;
				else if(str[i-1]==str1[j-1]) 
					dp[i][j]=1+dp[i-1][j-1];
				else 
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}

		cout<<(len1-dp[len1][len1])<<endl;
	}
	return 0;
}