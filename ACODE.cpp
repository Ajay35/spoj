#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	string str;
	while(cin>>str)
	{
		
		if(str[0]=='0')
			break;
		else
		{
			int len=str.size();
			ll dp[len+1]={0};
			dp[0]=1;
			for(int i=1;i<len;i++)
			{
				if(str[i]-'0')
				{
					dp[i]=dp[i-1];
					cout<<str[i]<<"a"<<endl;
				}	
				int n=(str[i-1]-'0')*10+(str[i]-'0');
				if(n>9 && n<=26)
				{
					dp[i]+=dp[(i-2)<0?0:i-2];
					cout<<dp[i-2]<<"b"<<endl;
					cout<<str[i]<<"c"<<endl;
				}
				cout<<"dp["<<i<<"]:"<<dp[i]<<":"<<str[i]<<endl;
			}
			if(dp[len-1]==0)
				cout<<1<<endl;
			else
				cout<<dp[len-1]<<endl;			
		}
	}
	return 0;
}
