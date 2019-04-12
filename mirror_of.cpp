#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	string str;
	cin>>t;
	while(t--){
		cin>>str;
		string str1=str;
		reverse(str1.begin(),str1.end());
		if(str==str1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}


	return 0;
}
