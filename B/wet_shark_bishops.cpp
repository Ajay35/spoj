
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();

using namespace std;

struct pai{
	int x,y;
};

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	LL n,x,y,i,j,k,c;

	cin>>n;
	vector<pai> bis;
	for(i=0;i<n;i++){
		pai p;
		cin>>p.x>>p.y;
		bis.push_back(p);
	}
	c=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){

			int dx=abs(bis[i].x-bis[j].x);
			int dy=abs(bis[i].y-bis[j].y);
			if(dx==dy){
				//cout<<bis[i].x<<" "<<bis[j].x<<"\n";
				//cout<<bis[i].y<<" "<<bis[j].y<<"\n";
				c++;
				//cout<<"----------------"<<endl;
			}
		}
	}
	cout<<c;
	return 0;
}
