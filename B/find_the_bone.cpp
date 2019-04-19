
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int main(){
	


	int n,m,k,i,x,y,h,m1,ind;
	bool fall=0;
	cin>>n>>m>>k;
	int a[n];
	memset(a,0,sizeof(a));
	a[0]=1;
	for(i=0;i<m;i++){
		cin>>m1;
		a[m1-1]=-1;
	}
	for(i=0;i<k;i++){
		cin>>x>>y;
		if(fall){
			printf("%d",ind);
			return 0;
		}
		if((a[x-1]==1 && a[y-1]==-1) ||(a[y-1]==1 && a[x-1]==-1)){
			fall=1;
			a[x-1]==-1?ind=x:ind=y;
		}
		swap(a[x-1],a[y-1]);
	}
	for(i=0;i<n;i++)
		if(a[i]==1) {
			ind=i+1;
			break;
		}
	printf("%d",i+1);
	return 0;
}
