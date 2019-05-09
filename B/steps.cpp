
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>

using namespace std;

struct point{
	int x;
	int y;
};

int main(){
		
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

ios::sync_with_stdio(0);
cin.tie(NULL);

	int n,m,xc,yc,i,k,x,y;
	cin>>n>>m;
	cin>>xc>>yc;
	cin>>k;
	vector<point> vs;

	for(i=0;i<k;i++){
		point p;
		cin>>p.x;
		cin>>p.y;
		vs.pb(p);
	}
	int steps=0;
	for(i=0;i<k;i++){
		if(vs[i].x+xc<1 or vs[i].x+xc>n or vs[i].y+yc<1 or vs[i].y+yc>m) continue;
		
		if(vs[i].x>vs[i].y){
			int xsteps=floor((n-xc)/vs[i].x);
			xc+=(vs[i].x)*xsteps;
			yc+=(vs[i].y)*xsteps;
			steps+=xsteps;
		}
		else{
			int ysteps=floor((m-yc)/vs[i].y);
			xc+=(vs[i].x)*ysteps;
			yc+=(vs[i].y)*ysteps;
			steps+=ysteps;
		}
	}
	cout<<steps;
	return 0;
}
