#include <iostream>
#include <cstdio>
#include <algorithm>
#include <deque>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <map>
#include <set>
#include <ctime>
#include <string.h>
#define LL long long
#define inf 0x7fffffff
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vii vector<ppi>
#define vll vector<LL>
#define mp make_pair
using namespace std;

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
struct parti
{
	int score;
	int semi;
	int id;
};

bool cmp(parti a,parti b)
{
	return a.score<b.score;
}

int main(){
		
	fastio();
	inputread();
	int n,i,j,k,t;
	cin>>n;
	k=n/2;
	vector<parti> semi1(n),semi2(n);
	for(i=0;i<n;i+=1)
	{
		cin>>semi1[i].score;
		semi1[i].id=i;
		cin>>semi2[i].score;
		semi2[i].id=i;
	}
	int matrix[2][n];
	memset(matrix,0,sizeof matrix);
	sort(semi1.begin(),semi1.end(),cmp);
	sort(semi2.begin(),semi2.end(),cmp);

	i=0,j=0,t=0;

	while(i<n && j<n && t<n)
	{
		if(semi1[i].score<=semi2[j].score)
		{
			matrix[0][semi1[i].id]=1;
			i++;
		}
		else
		{
			matrix[1][semi2[j].id]=1;
			j++;	
		}
		t++;
	}

	for(i=0;i<(n/2);i++)
	{
		matrix[0][semi1[i].id]=1;
		matrix[1][semi2[i].id]=1;
	}

	for(i=0;i<2;i++){
		for(j=0;j<n;j++){
			cout<<matrix[i][j];
		}
		cout<<endl;
	}

	return 0;
}
