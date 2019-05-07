#include <iostream>
#define LL long long
#define mod 1000000007
using namespace std;

const int N = 1e6;
LL a[N], t[4*N]; 
//a is the array
//t is the segment tree

void build(int node, int start, int end) {
	if(start == end) {
		t[node] = a[start];
	}
	else {
		int mid = (start+end)/2;
		build(2*node, start, mid);
		build(2*node+1, mid+1, end);
		t[node] =( (t[2*node]+t[2*node+1])%mod+(t[2*node]*t[2*node+1])%mod)%mod;
	}
}

LL query(int node, int start, int end, int l, int r) {
	if(l > end || r < start) {
		return 0;
	}
	else if(l <= start && end <= r){
		return t[node];
	}
	int mid = (start+end)/2;
	LL x1=query(2*node, start, mid, l, r);
	LL x2=query(2*node+1, mid+1, end, l, r);
	return ((x1+x2)%mod+(x1*x2)%mod)%mod;
}
int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

    int t;
    cin>>t;
    for(int i=1;i<=N;i++){
        a[i]=i;
    }

    build(1,1,N);
    while(t--)
    {
    	LL n;
        cin>>n;
        cout<<query(1,1,N,1,n)<<endl;
    }
    return 0;
}