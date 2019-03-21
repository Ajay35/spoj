#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[100010],tree[4*100010];
int t,n,q,x,y,no;

void build(int node,int start,int end){
	if(start==end){
		tree[node]=arr[start];
	}
	else{
		int mid=(start+end)/2;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);
		tree[node]=tree[2*node]+tree[2*node+1];
	}
}

int query(int node,int start,int end,int l,int r){
	if(r<start or end<l) return 0;

	if(l<=start and end<=r){
		return tree[node];
	}
	int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return (p1 + p2);
}


void update(int node,int start,int end,int idx,int val){
	if(start==end){
		arr[idx]+=val;
		tree[node]+=val;
	}
	else{
		int mid = (start + end) / 2;
        if(start <= idx and idx <= mid) update(2*node, start, mid, idx, val);
        else update(2*node+1, mid+1, end, idx, val);
        tree[node] = tree[2*node] + tree[2*node+1];
	}
}

int main(){

	cin>>t;
	while(t--){
		memset(tree,0,sizeof tree);
		cin>>n>>q;
		for(int i=1;i<=n;i++)
			cin>>arr[i];
		while(q--){
			cin>>d;
			if(d==0){
				cin>>x>>y>>no;
				update(1,1,n,x,y,no);
			}
			else{
				cin>>x>>y;
				cout<<query(1,1,n,x,y)<<endl;
			}
		}
	}

}