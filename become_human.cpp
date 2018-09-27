#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll x,y,xy,yx;	
	cin>>x>>y;
	xy=pow(x,y);	
	yx=pow(y,x);
	if(xy>yx)
		cout<<">"<<endl;
	else
		cout<<"<"<<endl;

}
