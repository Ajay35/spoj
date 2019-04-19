
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int n,m;

vector<int> chain[101];
int degree[101];

int main(){
	
	int i,j,a,b,c=0;
	cin>>n>>m;
	memset(degree,0,sizeof degree);
	for(i=0;i<m;i++){
		cin>>a>>b;
		chain[a-1].push_back(b-1);
		chain[b-1].push_back(a-1);
		degree[a-1]++;
		degree[b-1]++;
	}
	
	queue<int> que;

	for(i=0;i<n;i++){
		if(degree[i]==1)
			que.push(i);
	}	
	c=0;
	bool cons;
	while(!que.empty()){
		int s=que.size();
		cons=0;
		while(s--){
			int u=que.front();
			que.pop();
			if(degree[u]==1) cons=1;
			for(i=0;i<chain[u].size();i++){
				degree[chain[u][i]]--;
				if(degree[chain[u][i]]==1) 
					que.push(chain[u][i]);
			}
		}
		if(cons) c++;
	}
	printf("%d",c);
	return 0;
}
