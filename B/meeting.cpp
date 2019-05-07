
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

struct heater{
	int x;
	int y;
	double r;
};
struct point{
	int x;
	int y;
};


int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,i,j,xa,xb,ya,yb,c;

	cin>>xa>>ya>>xb>>yb;
	cin>>n;
	heater a[n];
	for(i=0;i<n;i++){
		cin>>a[i].x;
		cin>>a[i].y;
		cin>>a[i].r;
	}

	if(xa>xb){
		swap(xa,xb);
		swap(ya,yb);
	}
	vector<point> generals;
	for(i=min(ya,yb);i<=max(ya,yb);i++){
		point p;
		p.x=xa;
		p.y=i;
		generals.push_back(p);
	}
	for(i=xa+1;i<xb;i++){
		point p;
		p.x=i;
		p.y=ya;
		generals.push_back(p);
		p.y=yb;
		generals.push_back(p);
	}

	for(i=min(ya,yb);i<=max(ya,yb);i++){
		point p;
		p.x=xb;
		p.y=i;
		generals.push_back(p);
	}
	c=0;
	//cout<<generals.size()<<endl;
	for(i=0;i<generals.size();i++){
		bool found=0;
		for(j=0;j<n;j++){	
			double dist=sqrt(pow((generals[i].x)-a[j].x,2)+pow((generals[i].y-a[j].y),2));
			//cout<<dist<<" "<<a[j].r<<endl;
			if(dist <= a[j].r){
				found=1;
				break;
			}
		}
		if(!found) c++;
	}
	
	cout<<c;
	return 0;
}
