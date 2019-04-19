#include <bits/stdc++.h>
using namespace std;
int main() {
	string a="GBIV"; string b; int n;
		cin>>n;
		if (n<7)
			cout<<"Wrong!";
		else  cout<<"ROYGBIV";
	    n=n-7;
		for (int i=1;i<=n/4;i++)
			cout<<a;
		n=n%4;
		b="";
		for (int i=0;i<n;i++)
		    b=b+a[i];
		cout<<b;
		return 0;
}