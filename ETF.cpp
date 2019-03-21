#include<bits//stdc++.h>
using namespace std;

int solve(int n){
	int c=1;
	for(int i=2;i<=n-1;i++){
		if(__gcd(i,n)==1) c++;
	}
	return c;
}

int phi(int n) 
{ 
    float result = n; // Initialize result as n 
    for (int p = 2; p * p <= n; ++p) { 
          if (n % p == 0) { 
            while (n % p == 0) 
                n /= p; 
            result *= (1.0 - (1.0 / (float)p)); 
        } 
    }
    if (n > 1) 
        result *= (1.0 - (1.0 / (float)n)); 
  
    return (int)result; 
} 

int main(int argc, char const *argv[])
{
	int t,n;

	cin>>t;
	while(t--){
		cin>>n;
		cout<<phi(n)<<endl;
	}
	return 0;
}