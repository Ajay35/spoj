#include <bits/stdc++.h>
using namespace std;

int n;
int p,q,r,c;
map<int,vector<int>> fofs;
int main(int argc, char const *argv[])
{
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p;
		fofs[p];
		cin>>q;
		
		for(int j=1;j<=q;j++){
			cin>>r;
			fofs[p].push_back(r);
		}
	}
	c=0;
	map<int,int> visited;
	for(auto i : fofs){
		vector<int> temp=i.second;
		for(int j=0;j<temp.size();j++){
			if(fofs.find(temp[j])==fofs.end() and visited.find(temp[j])==visited.end()){
				visited[temp[j]]++;
				c++;
			}
		}
	}
	cout<<c<<endl;
	return 0;
}