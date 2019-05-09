
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>

using namespace std;


int dp[105][8], PP[105][8] ;
string X,A ;
void find_ans(int i,int j)
{
    if(PP[i][j]==-1) { cout<<A[i]; return ; }
    int k = PP[i][j];
    find_ans(i-1,k) ;
    if((k*10 + A[i]-'0')%8 == j) cout<<A[i] ;
}



int main(){
		
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

ios::sync_with_stdio(0);
cin.tie(NULL);

	cin>>A ;
    dp[0][(A[0]-'0')%8]=1 ;
    PP[0][(A[0]-'0')%8]=-1;
    for(int i=1;i<A.size();++i)
    {
        int num= A[i] - '0' ;
        dp[i][num%8] = 1 ;
        PP[i][num%8] = -1 ;
        for(int j=0;j<8;++j)
        {
            if(dp[i][(j*10 + num)%8]==0 && dp[i-1][j]==1) dp[i][(j*10 + num)%8]=1 , PP[i][(j*10 + num)%8]=j ;
            if(dp[i][j]==0 && dp[i-1][j]==1) dp[i][j]=1 , PP[i][j]=j ;
        }
    }
    for(int i=0;i<A.size();++i)
    {
        if(dp[i][0]==1)
        {
            cout<<"YES"<<endl ;
            find_ans(i,0) ;
            return 0 ;
        }
    }
    cout<<"NO"<<endl ;
    return 0 ;	

	return 0;
}
