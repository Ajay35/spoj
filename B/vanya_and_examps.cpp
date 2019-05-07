
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();

using namespace std;

bool cmp(pair<int,int> x,pair<int,int> y){
	return (x.second < y.second);
}


int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	LL n,r,a,b,i;
	LL avg;
	LL total=0;
	cin>>n>>r>>avg;
	vector<pair<int,int>> subessay;
	total=0;
	for(i=0;i<n;i++){
		cin>>a>>b;
		total+=a;
		subessay.push_back({a,b});
	}

	if((total)>=(avg*n)){
		cout<<0;
		return 0;
	}
	sort(subessay.begin(),subessay.end(),cmp);


	LL essays=0;
	LL need=(avg*n)-total;
	for(i=0;i<n;i++){
		if(subessay[i].first>=r) continue;
		
		if(need>(r-subessay[i].first)){
			need=need-(r-subessay[i].first);
			essays+=subessay[i].second*(r-subessay[i].first);
		}
		else{
			essays+=subessay[i].second*need;
			need=0;
		}
		if(need==0) break;	
	}
	cout<<essays;
	return 0;
}
