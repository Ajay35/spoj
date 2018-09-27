#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ind=0;bool s=true;
	string str,new_str="";
	cin>>n>>str;
	int ss=str.size(),rows=ss/n;
	char arr[str.size()/n][n];
	for(int i=0;i<ss;i+=n)
	{
		if(s)
		{
			for(int j=i,k=0;j<i+n;j++,k++)
			{
				arr[ind][k]=str[j];
			}
			s=false;
		}
		else
		{
			for(int j=i+4,k=0;j>=i;j--,k++)
			{
				arr[ind][k]=str[j];
			}
			s=true;	
		}
		ind++;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<rows;j++)
		{
			cout<<arr[j][i];
		}
	}
	cout<<endl;
	return 0;
}
