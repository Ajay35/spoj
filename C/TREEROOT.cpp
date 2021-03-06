/**
 * December Cook-Off 2012 at Codechef
 *
 * Problem:     TREEROOT - Root of the Problem
 * Author:      Anton Lunyov (Tester)
 * Complexity:  O(N) per test
 * Timing:      0.00 out of 1
 *
 * Description:
 * The id of the root equals to the sum of (id[v] - sum_ids[v])
 * over all vertexes v, where id[v] is the id of the vertex v
 * and sum_ids[v] is the sum of ids of children of the vertex v.
 * So we can find it on the input stage
 * even without saving information about vertexes into arrays.
 */
#include <iostream>
using namespace std;

int main() {
	// input number of tests
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int T;
	cin >> T;
	// loop over tests
	for (int t = 0; t < T; ++t) {
		// input N
		int N;
		cin >> N;
		// init root as zero
		int root = 0;
		// loop over vertexes of the tree
		for (int i = 0; i < N; ++i) {
			// input id of the i-th vertex
			// and sum of ids of its children
			int id, sum_ids;
			cin >> id >> sum_ids;

			// according to the editorial the root is just
			// the sum of differences (id - sum_ids)
			root += id - sum_ids;
		}
		// output the result
		cout << root << endl;
	}
	return 0;
}
