#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	long int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int count=0;
		for(int i=1;pow(5,i)<=n;i++)
		{
			count+=(n/pow(5,i));
		}
		cout<<count<<endl;
	}
}