
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int main(){
	
	int n,i,c,ma=1,j,k;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];

	for(i=0;i<n;i++){
		c=1;
		j=i-1;
		k=i+1;
		int cur=a[i];
		while(j>=0){
			if(a[j]<=cur){
				c++;
				cur=a[j];
			}
			else break;
			j--;
		}

		cur=a[k];

		while(k<n){
			if(a[k]<=cur){
				c++;
				cur=a[k];
			}
			else break;
			k++;
		}
		if(c>ma) ma=c;
	}
	printf("%d",ma);
	return 0;
}
