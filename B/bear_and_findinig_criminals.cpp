
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int main(){
	
	int n,k,i,dis,c;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	k=k-1;
	dis=0;
	c=0;
	while(k+dis<n || k-dis>-1){

		if(k+dis <n && k-dis>-1){
			if(a[k+dis]>0 && a[k-dis]>0){
				k+dis==k-dis?c+=a[k+dis]:c+=(a[k+dis]+a[k-dis]);			
			}
		}
		else if(k+dis>=n && k-dis>=0) c+=a[k-dis];
		else if(k+dis<n && k-dis<=-1) c+=a[k+dis];
		dis++;
	}
	printf("%d",c);
	return 0;
}
	