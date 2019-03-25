#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define isone(x,i) (( (x) >> (i) ) & 1)

int adjmat[21][21];
int size;
long long memo[1<<20];

int count_bits(int n) {
   int r = 0;
   while (n > 0) { r += (n&1); n >>= 1; }
   return r;
}

int main() {
   memset(adjmat,0,sizeof(adjmat));
   ios_base::sync_with_stdio(false);
   int nT;
   cin >> nT;
   while (nT-- && cin >> size) {
      memset(adjmat,0,sizeof(adjmat));
      memset(memo,0,sizeof(memo));
      for (int i = 0; i < size; i++) {
         for (int j = 0; j < size; j++) {
            int val; cin >> val;
            adjmat[i][j] = val;
         }
      }
      memo[(1<<size)-1] = 1;
      for (int j = (1 << size)-1; j >= 0; j--){
         int idx = count_bits(j);
         for (int k = 0; k < size; k++) {
            if (adjmat[idx][k] == 0 || (j & (1 << k))) continue;
            memo[j] += memo[j | (1 << k)];
         }
      }
      cout << memo[0] << "\n";
   }
   return 0;
}