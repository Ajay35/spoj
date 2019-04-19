
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int main(){
	
	string str;
	ll sum,c,i;
	cin>>str;
	if(str.size()==1)
	{
		printf("0");
		return 0;
	}
	c=0;
	while(true){
		sum=0;
		for(i=0;i<str.size();i++){
			sum+= str[i]-'0';
		}
		c++;
		if(sum<10) break;
		str=to_string(sum);
	}
	printf("%lld",c);
	return 0;
}
