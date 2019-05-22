#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct height
{
	long long int r;
	long long int h;
};

void fastio()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}
void inputread()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}
int compare(const void* a, const void* b)
{
	return ((*(height *)b).r-(*(height *)a).r);
}

int main() {
// your code goes here
	fastio();
	inputread();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		struct height a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i].r>>a[i].h;
		}
		qsort(a,n,sizeof(a[0]),compare);
		long long int mcs[n];
		for(int i=0;i<n;i++) 
			mcs[i] = a[i].h;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if((a[i].h < a[j].h) && (a[i].r < a[j].r)) 
					mcs[i] = max(mcs[i],mcs[j]+a[i].h);
			}
		}
		long long int max = mcs[0];
		for(int i=1;i<n;i++)
		{
			if(max<mcs[i]) 
				max = mcs[i];
		}
		cout<<max<<endl;
	}
	return 0;
}