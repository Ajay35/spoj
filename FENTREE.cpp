#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int NMAX=500010;
ll arr[NMAX],tree[NMAX];

ll read(int x){
	ll sum=0;

	while(x>0){
		sum+=tree[x];
		x-=(x&-x);
	}
	return sum;
}
ll query(int a,int b){
	return read(b)-read(a-1);
}
void update(int  id,ll val){
	while(id<NMAX){
		tree[id]+=val;
		id+= (id & -id);
	}
}


int main(int argc, char const *argv[])
{
	ll n,q,x,y;
	char ch;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		update(i,arr[i]);
	}
	cin>>q;
	while(q--){
		cin>>ch>>x>>y;
		if(ch=='q'){
			cout<<query(x,y)<<endl;
		}
		else{
			update(x,y);
			arr[x]+=y;
		}
	}
	return 0;
}