
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>

using namespace std;

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	

	LL facts[10];
	facts[0]=0;
	facts[1]=1;

	int n,i,j;
	string str;
	cin>>n;
	cin>>str;
	for(i=2;i<10;i++){
		facts[i]=facts[i-1]*i;
	}

	sort(str.begin(),str.end());

	string sol="";
	for(i=0;i<n;i++)
	{
		if(str[i]=='1' or str[i]=='0') continue;
		if(str[i]=='2') sol+='2';
		if(str[i]=='3') sol+='3';
		if(str[i]=='4') sol+="223";
		if(str[i]=='5') sol+='5';
		if(str[i]=='6') sol+="35";
		if(str[i]=='7') sol+='7';
		if(str[i]=='8') sol+="2227";
		if(str[i]=='9') sol+="3327";
	}
	sort(sol.begin(),sol.end());
	reverse(sol.begin(),sol.end());
	cout<<sol;
	return 0;
}
