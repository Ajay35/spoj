
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int main(){
	
	int m,n,k,i,d;
	cin>>n>>k;
	int a[n];
	
	for(i=0;i<n;i++)
		cin>>a[i];
	
	if(k==1){
		printf("1.000000000");
		return 0;
	}	
	sort(a,a+n);

	if(a[0]!=0) m=a[0]*2;
	else m=0;
	for(i=0;i<n-1;i++){
		d=a[i+1]-a[i];
		m=max(d,m);
	}
	if(a[n-1]!=k) d=2*(k-a[n-1]);
	m=max(m,d);
	cout<<fixed;
	cout<<setprecision(10);
	cout<<(double)m/2<<endl;
	return 0;
}
