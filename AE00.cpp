#include<bits/stdc++.h>
using namespace std;
int get_factors(int n){
	int l=sqrt(n);
	int c=0;
	for(int i=1;i<=l;i++){
		if(n%i==0) c++;
	}
	return c;
}
int main(){
	
	int x;
	cin>>x;
	int c=0;

	for(int i=x;i>=1;i--){
		c+=get_factors(i);
	}
	cout<<c<<endl;
	return 0;
}