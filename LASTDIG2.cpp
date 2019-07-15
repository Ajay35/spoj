#include<cmath>
#include<iostream>
using namespace std;
inline long long Read()
{
	register int c=getchar();
	long long x=0;
	for(;(c<48 || c>57);c=getchar());
	for(;c>47 && c<58;c=getchar())
		x=(x<<1)+(x<<3)+c-48;
	return x;
}
int cycle[10]={0,1,4,4,2,1,1,4,4,2};
int main()
{
	int t=(int)(Read());
	while(t--)
	{
		string a;
		cin>>a;
		int d=a[a.length()-1]-'0';
		long long b=Read();
		if(b==0)
		{
			cout<<1<<endl;
			continue;
		}
		if(d<2 || d==5 || d==6)
		{
			cout<<d<<endl;
			continue;
		}
		int mod=b%cycle[d];
		if(mod)
			cout<<(int)(pow(d,b%cycle[d]))%10<<endl;
		else
			cout<<(int)(pow(d,cycle[d]))%10<<endl;
	}
	return 0;
}