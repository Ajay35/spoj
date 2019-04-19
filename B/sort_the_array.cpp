
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;


void rev(int a[],int l,int r,int n) {
    int t[n];
    int i,j;
    for(i=l,j=r; i<=r; i++,j--)
        t[i] = a[j];
    
    for(i=l; i<=r; i++)
        a[i] = t[i];
}



int main(){
	
	int n,i,seg=0,x,y,start,end;
	cin>>n;

	int a[n],b[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}

	
    sort(b,b+n);
        
	int l = -1, r = -1;
	for(int i=0; i<n; i++)
	    if(a[i]!=b[i]) {
	        l = i;
	        break;
	    }
	for(int i=n-1; i>=0; i--) 
	    if(a[i]!=b[i]) {
	        r = i;
	        break;
	    } 

	if(l==-1) {
	    printf("yes\n1 1");
	    return 0;
	}

	rev(a,l,r,n);

	for(i=0; i<n; i++) {
	    if(a[i]!=b[i]) {
	        printf("no");
	        return 0;
	    }
	}

	printf("yes\n%d %d",(l+1),(r+1));
	return 0;
}
