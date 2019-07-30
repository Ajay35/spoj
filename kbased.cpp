
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
using namespace std;

int n,k;
string dp[1800][2];

string add(string str1, string str2) 
{ 
    if (str1.length() > str2.length()) 
        swap(str1, str2); 
    string str = ""; 
    int n1 = str1.length(), n2 = str2.length(); 
  
    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end()); 
  
    int carry = 0; 
    for (int i=0; i<n1; i++) 
    { 
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
    for (int i=n1; i<n2; i++) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
    if (carry) 
        str.push_back(carry+'0'); 
    reverse(str.begin(), str.end()); 
  	
    return str; 
}
string solve(int i,int b)
{
	if(i==n) 
		return "1";
	if(dp[i][b]!="-1") 
		return dp[i][b];
	dp[i][b]="0";
	for(int it=0;it<k;it++)
	{
		if(it==0)
		{
			if(i!=0 && b==0) 
				dp[i][b]=add(dp[i][b],solve(i+1,1));
		}
		else if(it!=0)
			dp[i][b]=add(dp[i][b],solve(i+1,0));
	}
	return dp[i][b];
}

int main()
{		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int i,j;
	cin>>n>>k;
	for(i=0;i<1800;i++)
		for(j=0;j<=1;j++)
			dp[i][j]="-1";
	cout<<solve(0,0)<<endl;
	return 0;
}