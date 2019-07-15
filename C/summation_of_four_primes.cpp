#include<bits/stdc++.h>
using namespace std;
#define N 10000000
bool P[10000001];
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
void inputread()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
void makePrime(){
	memset(P, false, sizeof(P));
	int limit = sqrt((double)N);
	for (int i = 2; i <= limit; i++){
		if (!P[i]){
			for (int k = (N - 1) / i, j = i*k; k >= i; k--, j -= i)
				P[j] = true;
		}
	}
}
void Goldbach(int n){
	for (int i = 2;; i++){
		if (!P[i] && !P[n - i]){
			printf("%d %d", i, n - i);
			return;
		}
	}
}
int main(){
	fastio();
	inputread();
	makePrime();
	int n;
	while (scanf("%d", &n) == 1){
		if (n < 8)
			puts("Impossible.");
		else{
			if (n % 2 == 0)
				printf("%d %d ", 2, 2), n -= 4;
			else
				printf("%d %d ", 2, 3), n -= 5;
			Goldbach(n);
			putchar('\n');
		}
	}
	return 0;
}