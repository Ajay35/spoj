#include<iostream>
using namespace std;
int main()
{
	int a,b,i,temp=0;
	cin>>a>>b;
	int arr_a[2],product_arr[100];
	int i=0;
	for(i=0;a>0;i++)
	{
		arr_a[i]=a%10;
		a/=10;
	}
	int j=0;
	for(int i=0;i<2;i++)
	{
		temp+=arr_a[i]*b;
		cout<<"temp is:"<<temp<<":"<<"bit:"<<temp%10<<endl;
		product_arr[j]=temp%10;
		temp/=10;
		cout<<"carry is:"<<temp<<endl;
		j++;
		cout<<"in for loop multiply;"<<endl;
	}
	if(temp!=0)
	{
		cout<<"remaining:"<<temp<<endl;
		while(temp>0)
		{
			cout<<"bit:"<<temp%10<<endl;
			product_arr[j]=(temp%10);
			temp/=10;
			j++;
		}
	}
	
	for(int i=j-1;i>=0;i--)
		cout<<product_arr[i];
	cout<<endl;
	
}