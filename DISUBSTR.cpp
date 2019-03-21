#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	string str;
	cin>>t;
	while(t--){
		cin>>str;
		map<string,int> m;
		vector<string> v;
		for(int i=0;i<str.size();i++){
			m[str.substr(i,str.size()-i)]=i;
			v.push_back(str.substr(i,str.size()-i));
		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			cout<<m[v[i]]<<endl;
		}
	}

	return 0;
}