/**
*	  Name: Ajay
*	  Institute: IIITH 
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <deque>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <ctime>
#include <string.h>
#define ll long long
#define inf 0x7fffffff
#define mod 1000000000
#define pb push_back
#define ppi pair<int,int>
#define vi vector<ll>
#define vvi vector<vi>
#define vii vector<ppi>
#define vll vector<ll>
#define mp make_pair
#define fi first
#define se second
using namespace std;

void fastio()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}
void input()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}
vvi construct_mat(int k,ll c[])
{
	int i,j;
	vvi mat(k,vi(k));
	for(i=0;i+1<k;i++)
		mat[i][i+1]=1;
	for(i=0;i<k;i++)
		mat[k-1][i]=c[k-i-1];
	return mat;
}
vvi matrix_mult(vvi matA,vvi matB)
{
  vvi ret(matA.size(),vi(matB[0].size()));
  for(int i=0;i<ret.size();i++)
  {
    for(int j=0;j<ret[0].size();j++)
    {
      for(int k=0;k<matA[0].size();k++) 
      {
        ret[i][j]+=(matA[i][k]*matB[k][j])%mod;
        ret[i][j] %= mod;
      }
    }
  }
  return ret;	
}
vvi matrix_power(vvi mat, ll p) {
  if (p == 1) return mat;
  if (p % 2 == 1)
    return matrix_mult(mat,matrix_power(mat,p-1));
  vvi cur=matrix_power(mat,p/2);
  return matrix_mult(cur,cur);
}

int main()
{      
  fastio();
  input();
  ll n,k,i,j,t;
  cin>>t;
  while(t--)
  {
  	cin>>k;
  	ll b[k],c[k];
  	for(i=0;i<k;i++)
  		cin>>b[i];
  	for(i=0;i<k;i++)
  		cin>>c[i];
  	cin>>n;
  	if(n<=k)
  	{
  		cout<<b[n-1]<<"\n";
  		continue;
  	}
  	vvi ft(k,vi(1));
  	for(i=0;i<k;i++)
  		ft[i][0]=b[i];
  	vvi mat=construct_mat(k,c);
  	mat=matrix_power(mat,n-k);
  	mat=matrix_mult(mat,ft);
  	cout<<mat.back()[0]<<endl;
  }
  return 0;
}