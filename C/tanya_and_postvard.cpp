
#include <bits/stdc++.h>
#define LL long long
#define inf std::numeric_limits<int>::max();
#define neginf std::numeric_limits<int>::min();
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>

using namespace std;

int table[123];

int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int n1,n2,i,j;
	string s1,s2;
	cin>>s1;
	cin>>s2;
	n1=s1.size();
	n2=s2.size();
	int table1[123];
	memset(table1,0,sizeof table1);
	memset(table,0,sizeof table);
	
	for(i=0;i<n1;i++)
	{
		table1[(int)s1[i]]++;
	}

	for(i=0;i<n2;i++)
	{
		table[(int)s2[i]]++;
	}

	int y=0,w=0;
    for(i=0;i<n1;i++)
	{
		int ind=(int)(s1[i]);
		if(table[ind]>0)
		{
			y++;
			table[ind]--;	
			table1[ind]--;
		} 
		else
		{
			//cout<<i<<endl;
			//cout<<"before:"<<s1[i]<<endl;
			if(islower(s1[i])) s1[i]=toupper(s1[i]);
			else s1[i]=tolower(s1[i]);
			//cout<<"after:"<<s1[i]<<endl;
			int ind=(int)(s1[i]);
			if(table[ind]>table1[ind])
			{
				table[ind]--;
				w++;
			}
		}	
	}
	cout<<y<<" "<<w;
	return 0;
}
