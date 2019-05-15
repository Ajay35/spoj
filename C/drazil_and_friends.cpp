
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>

using namespace std;

vector<int> friends[105];
int r[210],p[210];

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int n,m,i,j,b,g,c,u,h=0;
	cin>>n>>m;

	int boys[n];
	memset(boys,0,sizeof boys);
	int girls[m];
	memset(girls,0,sizeof girls);
	cin>>b;
	h+=b;
	while(b--){
		cin>>c;
		boys[c]=1;
	}
	
	cin>>b;
	h+=b;
	while(b--){
		cin>>c;
		girls[c]=1;
	}
	u=n+m-h;
	//cout<<"unhappy friends:"<<u<<endl;
	for(i=0;i<=10000*max(n,m);i++)
	{
		int b=(i%n);
		int g=(i%m);
		if((boys[b]==0 && girls[g]==1) or (boys[b]==1 && girls[g]==0))
		{
			//cout<<b<<" "<<g<<endl;
			u--;
			//cout<<"unhappy friends:"<<u<<endl;
			boys[b]=1;
			girls[g]=1;
		}
	}
	if(u<=0) cout<<"Yes";
	else cout<<"No";
	return 0;
}
