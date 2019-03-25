#include <bits/stdc++.h>
using namespace std;

int t,m,n;
string arr[200];
int dist[200][200];
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>t;
	while(t--){
		cin>>m>>n;
		vector<pair<int,int>> whites;
		for(int i=0;i<m;i++){
			cin>>arr[i];
			for(int k=0;k<arr[i].size();k++){
				if(arr[i][k]=='1') whites.push_back(make_pair(i,k));
			}
		}

		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(arr[i][j]=='1') dist[i][j]=0;
				else{
					int d=INT_MAX;
					for(int k=0;k<whites.size();k++){
						d=min(d,(abs(i-whites[k].first)+abs(j-whites[k].second)));
					}

					dist[i][j]=d;	
				}
		}
	}

		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cout<<dist[i][j]<<" ";
			}
			cout<<endl;
		}

	}
	return 0;
}