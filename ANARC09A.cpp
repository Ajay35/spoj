#include <bits/stdc++.h>
using namespace std;

string str;
int k=1;

int main(int argc, char const *argv[])
{
	while(true){
		int ans=0;
		int a=0;
		cin>>str;
		if(str[0]=='-') break;

		for(int i=0; i<str.size(); i++)
		{
			if(str[i]=='{') a++;
			if(str[i]=='}') a--;
			if(a<0) { ans++; a+=2; }
			if(a>=str.size()-i) { ans++; a-=2; }
		}
		cout<<k++<<". "<<ans<<endl;
	}
	return 0;
}