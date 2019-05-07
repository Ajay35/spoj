
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,i; 
	cin >> n;
    std::vector<int64_t> pos;
    for(i=0;i<n;i++){
        int x;
        cin >> x;
        if(x == 1) pos.push_back(i);
    }

    int64_t total = (pos.size() == 0) ? 0 : 1;
    for(int i=1;i<pos.size();i++){
    	total*=(pos[i]-pos[i-1]);
    }
    cout<<total;
	return 0;
}
