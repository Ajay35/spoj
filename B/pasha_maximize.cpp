
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	int k, x = 0, y, z, w, i;
	string line;
    cin >> line;
    cin >> k;

    while (k > 0 && x < line.length()) {

        y = -1;
        i = x;

        while (i <= (x + k) && i < line.length() ) {
            z = line[i] - '0';
            if (z > y) {
                y = z;
                w = i;
            }

            i++;
        }

        k -= w - x;

        while (w > x) {
            swap (line[w - 1],line[w]);
            w--;
        }

        x++;
    }

    cout << line << endl;

    return 0;
	
	return 0;
}
