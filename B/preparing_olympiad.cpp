
#include <bits/stdc++.h>
#include <cstdlib> 
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll i,j,n,l,r,x,c[20],problem,total,maxi,mini,diff;
    while(cin>>n>>l>>r>>x)
    {
        for(i=0; i<n; i++)
        {
            cin>>c[i];
        }
        problem=0;
        for(i=0; i<(1<<n); i++)
        {
            if(__builtin_popcount(i)<2)
                continue;
            maxi=0;
            mini=INT_MAX;
            total=0;
            for(j=0; j<n; j++)
            {
                if(i & (1<<j))
                {
  				    maxi=max(maxi,c[j]);
                    mini=min(mini,c[j]);
                    total+=c[j];
                }
            }
            diff=maxi-mini;
            if(total>=l && total<=r && diff>=x)
            {
                problem++;
            }
        }
        cout<<(problem);
    }
    return 0;
}
