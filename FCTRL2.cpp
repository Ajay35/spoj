#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==0)
		{
			cout<<1<<endl;
			continue;
		}
		int i,index=0,temp=0;
		char fact[200]={0};
		int temp_a=n;
		for(i=0;temp_a>0;i++)
		{
			fact[i]=temp_a%10;
			temp_a/=10;
		}
		index=i-1;
		for(int j=n-1;j>=1;j--)
		{
			for(int k=0;k<=index;k++)
			{
				temp+=(fact[k]*j);
				fact[k]=temp%10;
				temp/=10;
			}
			if(temp!=0)
			{
				index++;
				while(temp>0)
				{
					fact[index]=temp%10;
					temp/=10;
					index++;
				}
			}
			
		}
		while(fact[index]==0)
			index--;
		for(int i=index;i>=0;i--)
			cout<<(int)fact[i];
		cout<<endl;
		
		
	}
	return 0;
}