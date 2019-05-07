
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,i,c;
	string str;
	cin>>str;
	n=str.size();
	c=0;
	stack<char> st;
	
	for(i=0;i<n;i++){
		if(st.empty() || str[i]=='('){
			st.push(str[i]);
		}
		else if(st.top()=='(' && str[i]==')'){
			st.pop();
			c+=2;
		}
	}
	printf("%d",c);
	return 0;
}
