#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int b,g;

	while(true){
		cin>>b>>g;
		if(b==-1 and g==-1) break;

		if(b==0 or g==0){ 
			b==0?cout<<g<<endl:cout<<b<<endl;
			continue;
		}
		if(b>g)	cout<<ceil((float)b/(g+1))<<endl;
		else cout<<ceil((float)g/(b+1))<<endl;

	}
	return 0;
}