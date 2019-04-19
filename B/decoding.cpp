
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

void solve(string str,int n,int ind[]){
	
	char output[n];
	int c=1,i,mid,mid_left,mid_right;
	bool left;

	if(n&1)	left=1,mid=n/2;
	else left=0,mid=n/2-1;
	i=1;
	mid_left=mid,mid_right=mid;
	ind[0]=mid;
	while(c<n){
		if(left){
			ind[i++]=mid_left-1;
			mid_left--;
			left=0;
		}
		else{
			ind[i++]=mid_right+1;
			mid_right++;
			left=1;
		}
		c++;
	}
	for(i=0;i<n;i++)
		output[ind[i]]=str[i];
	for(i=0;i<n;i++)
		cout<<output[i];
}

int main(){
	
	int n;
	string str;
	cin>>n>>str;
	int output[n];
	solve(str,n,output);
	return 0;
}
