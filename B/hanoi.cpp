/* 1054. Hanoi Tower */

#include <iostream>

int A[32];
bool bad = false;

int calc(int n, int from, int to, int temp)
{
    if(n == 0) return 0;
    if(A[n-1] == from) return calc(n-1, from, temp, to);
    else if(A[n-1] == to) return (1 << (n-1)) + calc(n-1, temp, to, from);
    return bad = true;
}

int main()
{
    int N;
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    std::cin >> N;
    for(int i = 0; i < N; i++)
        std::cin >> A[i];
    int result = calc(N, 1, 2, 3);
    std::cout << (bad ? -1 : result);
}