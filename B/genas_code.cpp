
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	int n,i;
	cin>>n;
	vector<string> tanks(n);
	bool zero=0;
	string nonbeaut="";
	for(i=0;i<n;i++){
		cin>>tanks[i];
		if(tanks[i][0]=='0'){
			zero=1;
		}
		else{
			int numones=0;
			int nums=0;
			for(int j=0;j<tanks[i].size();j++){
				if(tanks[i][j]=='1') numones++;
				if(tanks[i][j]!='0' && tanks[i][j]!='1') nums++;
				if(numones>1 or nums>0){
				 nonbeaut=tanks[i];
				 break;
				}
			}
		}
	}
	if(zero){
		cout<<0;
	}
	else{
		//cout<<"not beaut:"<<nonbeaut<<endl;
		int trail_zeros=0;
		for(i=0;i<n;i++){
			if(tanks[i]!=nonbeaut && tanks[i]!="0"){
				trail_zeros+=(tanks[i].size())-1;
			}
		}
		if(nonbeaut=="") nonbeaut+="1";
		for(i=0;i<trail_zeros;i++){
			nonbeaut+="0";
		}
		cout<<nonbeaut;
	}


	return 0;
}
