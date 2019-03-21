#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	float c;

	while(true){
		cin>>c;
		if(c==0.0) break;
		if(c==0.0) {cout<<"0"<<endl;continue;}
		int count=1;
		float c2=0.5;
		float st1=2;
		while(c>c2){
			c2+=(1/(++st1));
			count++;
			//cout<<c2<<endl;
		}
		cout<<count<<" card(s)"<<endl;
	}
	return 0;
}