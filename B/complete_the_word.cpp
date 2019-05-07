
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string str;
	cin>>str;
	int n=str.size(),ques=0,c=0,i;
	if(n<26){
		cout<<-1<<endl;
		return 0;
	}
	int used[26];
	memset(used,0,sizeof used);

	for(i=0;i<n;i++){
		if(str[i]!='?' && freq.find(str[i])!=freq.end()) used[str[i]-65]++;
		else if(str[i]=='?') ques++;
	}
	if(ques==0){
		bool valid=1;
		for(i=0;i<n;i++){
			
		}
	}
	else{

	}


	return 0;
}
