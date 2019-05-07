
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();

using namespace std;

void print_all_lengths(char ch[],string prefix,int n,int k,vector<string>& ans){
	if(k==0){
		ans.push_back(prefix);
		return;
	}

	for(int i=0;i<n;i++){
		print_all_lengths(ch,prefix+ch[i],2,k-1,ans);
	}
}

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string no;
	int i;
	cin>>no;
	int p=no.size();
	char arr[2]={'4','7'};
	vector<string> ans;
	print_all_lengths(arr,"",2,p,ans);
	LL sum=0;
	for(i=1;i<=p-1;i++){
		sum+= (1<<i);
	}

	for(i=0;i<ans.size();i++){
		sum++;
		if(ans[i]==no) break;
	}
	cout<<sum;
	return 0;

}
