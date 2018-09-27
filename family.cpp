#include<bits/stdc++.h>
using namespace std;
/*int check(string a,string b)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b)
        return 1;
    else
        return 0; 
}*/

int check(string a,string b)
{
	int arra[26]={0},arrb[26]={0};
	for(int i=0;a[i];i++)
	{
		arra[(int)a[i]-97]++;
		arrb[(int)b[i]-97]++;		
	}
	for(int i=0;i<26;i++)
	{
		if(arra[i]!=arrb[i])
			return 0;
	}
	return 1;
}
int main() {
    int n,c=1,maxx=INT_MIN;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
	{
        cin>>str[i];
		sort(str[i].begin(),str[i].end());
	}
	
	sort(str,str+n);
    for(int i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
		{
			c++;
			(maxx<c)?maxx=c:maxx;
		}
		else
			c=1;
    }
    cout<<maxx<<endl;
    return 0;
}	
