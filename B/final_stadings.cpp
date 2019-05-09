
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>

using namespace std;

struct student{
	int id;
	int prob;
	int ind;
};

bool cmp(student p1,student p2){
	if(p1.prob!=p2.prob) return p1.prob>p2.prob;
	return p1.ind<p2.ind;
}

int main(){
		
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

ios::sync_with_stdio(0);
cin.tie(NULL);

	int n,i,a,b;
	cin>>n;
	vector<student> ranks;
	for(i=0;i<n;i++){
		student s;
		cin>>a>>b;
		s.id=a;
		s.prob=b;
		s.ind=i;
		ranks.pb(s);
	}
	sort(ranks.begin(),ranks.end(),cmp);

	for(i=0;i<n;i++){
		cout<<ranks[i].id<<" "<<ranks[i].prob<<"\n";
	}
	return 0;
}
