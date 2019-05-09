
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007

using namespace std;

int main(){
		
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

ios::sync_with_stdio(0);
cin.tie(NULL);

	int L[6000], H[6000], R[6000];
int skyline[500000];
vector<int> out;
 
    int max_R = 0;
    for(int i = 0;; i++) {
        if(scanf("%d %d %d", &L[i], &H[i], &R[i]) != 3) break;
        for(int j = L[i]; j < R[i]; j++) {
            if(H[i] > skyline[j])
                skyline[j] = H[i];
        }
        if(R[i] > max_R)
            max_R = R[i];
    }
    int curr = 0;
    for(int i = 0; i < max_R + 1; i++) {
        if(skyline[i] != curr) {
            out.push_back(i);
            out.push_back(skyline[i]);
            curr = skyline[i];
        }
    }
    printf("%d", out[0]);
    for(int i = 1; i < out.size(); i++)
        printf(" %d", out[i]);
    printf("\n");
}