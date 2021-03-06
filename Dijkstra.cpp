#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll inf = 10000000000000ll;
vector<pair<int,int> > e[100000];
vector<int> put;
set<pair<ll,int> > s;
ll d[100000];
int p[100000];

int main()
{
		int n, m;
	    cin >> n >> m;

	    for(int i = 0; i < m; ++i) {
	        int v1, v2, w;
	        cin >> v1 >> v2 >> w;
	        v1--;
	        v2--;
	        e[v1].push_back(make_pair(v2,w));
	        e[v2].push_back(make_pair(v1,w));
	    }

	    for(int i = 0; i < n; ++i)
	        d[i] = inf;
	    d[0] = 0;

	s.insert(make_pair(d[0], 0));
    while (!s.empty()) {
        int v = s.begin()->second;
        s.erase(s.begin());

        for(int i = 0; i < (int(e[v].size())); ++i) {
            int prvi = e[v][i].first;
            int w = e[v][i].second;

            if (d[v] + w < d[prvi]) {
                s.erase(make_pair(d[prvi], prvi));
                d[prvi] = d[v]+  w;
                p[prvi] = v;
                s.insert(make_pair(d[prvi], prvi));
            }
        }
    }
    if (d[n - 1] == inf)
        cout << -1;
    else {
        int c = n - 1;
        while (c != 0) {
            put.push_back(c + 1);
            c = p[c];
        }

        put.push_back(1);
        for(int i = (put.size()) - 1; i >= 0; --i)
        cout << put[i] << ' ';
    }


}
